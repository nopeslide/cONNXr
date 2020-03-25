#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../src/pb/onnx.pb-c.h"
#include "../src/trace.h"
#include "test_utils.h"

#include "models/test_model_mnist.h"
#include "models/test_model_tinyyolov2.h"
#include "models/test_model_super_resolution.h"
#include "models/common_models.h"
#include "operators/onnxBackendSuite.h" 

int main(int argc, char **argv)
{
  CU_pSuite onnxBackendSuite = NULL;
  CU_pSuite modelsTestSuite  = NULL;

  /* Initialize CUnit test registry */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();

  /* Add onnx test (operators) suite */
  onnxBackendSuite = CU_add_suite("onnxBackendSuite",
                                   onnxBackendSuite_init,
                                   onnxBackendSuite_clean);

  /* Add models test suite*/
  modelsTestSuite = CU_add_suite("modelsTestSuite",
                                 init_Models_TestSuite,
                                 clean_Models_TestSuite);
  if (NULL == onnxBackendSuite) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  if (NULL == modelsTestSuite) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  /* If arguments are provided, specific test from a suite can be run */
  if (argc == 3)
  {
    printf("Run tc=%s, from suite=%s\n", argv[2], argv[1]);
  }

  /* ONNX Backent Tests */
  /* All the following test cases are part of the official onnx backend
   * tests (see docs/OnnxBackendTest.md at onnx GitHub repo)
   * If a new operator is created, just comment it and a test will run
   * for it. Note also that if the official tests change, this will need to
   * be updated
   */
  onnxBackendSuite_addTestCases(onnxBackendSuite);

  /* Models tests */
  /* This suite tests a whole model end to end. All data is taken
   * form ONNX repository, where the model plus a set of inputs/outputs
   * is provided */
  CU_add_test(modelsTestSuite, "test_model_mnist", test_model_mnist);
  //CU_add_test(modelsTestSuite, "test_model_mnist_per_node", test_model_mnist_per_node);
  CU_add_test(modelsTestSuite, "test_model_tinyyolov2", test_model_tinyyolov2);
  //CU_add_test(modelsTestSuite, "test_model_super_resolution", test_model_super_resolution);

  CU_basic_set_mode(CU_BRM_VERBOSE);

  // If not inputs are provided, run everything
  if (argc == 1){
    CU_basic_run_tests();
  }

  else if (argc == 2){
    printf("running specific ts\n");
    CU_pSuite suite2run = CU_get_suite(argv[1]);
    CU_basic_run_suite(suite2run);
  }else if (argc == 3){
    printf("running specific tc from a ts\n");
    CU_pSuite suite2run = CU_get_suite(argv[1]);
    CU_pTest test2run = CU_get_test(suite2run, argv[2]);
    CU_basic_run_test(suite2run, test2run);
  }

  printf("CU_get_number_of_tests_run is %d\n", CU_get_number_of_tests_run());
  printf("CU_get_number_of_tests_failed is %d\n", CU_get_number_of_tests_failed());
  // TODO Temporal hackish solution to force CI to fail
  if (CU_get_number_of_tests_failed() != 0){
    exit (1);
  }

  CU_cleanup_registry();
  return CU_get_error();
}

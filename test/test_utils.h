#ifndef TEST_UTILS_H
#define TEST_UTILS_H

#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include <glob.h>

#include "../src/trace.h"
#include "../src/inference.h"
#include "../src/utils.h"
#include <glob.h>

#define FLOAT_TOLERANCE 0.001f

// Compare if equal with some tolarenace
void compareAlmostEqualTensorProto(Onnx__TensorProto *a, Onnx__TensorProto *b);
void testOperator(char *outputName);

#endif

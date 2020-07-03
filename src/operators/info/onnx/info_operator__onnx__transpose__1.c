//this file was generated by ../../../../../scripts/onnx_generator/OperatorInfo.py
#include "operators/operator_info.h"
#include "operators/onnx/operator__onnx__transpose__1.h"

/* attributes */
static
operator_info_attribute
attributes[] = {
{
    .name     = "perm",
    .optional = false,
    .type     = ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__INTS
}
};

/* input tensors */
static
uint32_t
input_tensor_type_data[] = {
ONNX__TENSOR_PROTO__DATA_TYPE__BOOL,
ONNX__TENSOR_PROTO__DATA_TYPE__COMPLEX128,
ONNX__TENSOR_PROTO__DATA_TYPE__COMPLEX64,
ONNX__TENSOR_PROTO__DATA_TYPE__DOUBLE,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT16,
ONNX__TENSOR_PROTO__DATA_TYPE__INT16,
ONNX__TENSOR_PROTO__DATA_TYPE__INT32,
ONNX__TENSOR_PROTO__DATA_TYPE__INT64,
ONNX__TENSOR_PROTO__DATA_TYPE__INT8,
ONNX__TENSOR_PROTO__DATA_TYPE__STRING,
ONNX__TENSOR_PROTO__DATA_TYPE__UINT16,
ONNX__TENSOR_PROTO__DATA_TYPE__UINT32,
ONNX__TENSOR_PROTO__DATA_TYPE__UINT64,
ONNX__TENSOR_PROTO__DATA_TYPE__UINT8
};

static
operator_info_tensor
inputs[] = {
{
    .name        = "data",
    .optional    = false,
    .variadic    = false,
    .homogeneous = true,
    .constraint  = "T",
    .n_types     = 15,
    .types       = input_tensor_type_data
}
};

/* output tensors */
static
uint32_t
output_tensor_type_transposed[] = {
ONNX__TENSOR_PROTO__DATA_TYPE__BOOL,
ONNX__TENSOR_PROTO__DATA_TYPE__COMPLEX128,
ONNX__TENSOR_PROTO__DATA_TYPE__COMPLEX64,
ONNX__TENSOR_PROTO__DATA_TYPE__DOUBLE,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT16,
ONNX__TENSOR_PROTO__DATA_TYPE__INT16,
ONNX__TENSOR_PROTO__DATA_TYPE__INT32,
ONNX__TENSOR_PROTO__DATA_TYPE__INT64,
ONNX__TENSOR_PROTO__DATA_TYPE__INT8,
ONNX__TENSOR_PROTO__DATA_TYPE__STRING,
ONNX__TENSOR_PROTO__DATA_TYPE__UINT16,
ONNX__TENSOR_PROTO__DATA_TYPE__UINT32,
ONNX__TENSOR_PROTO__DATA_TYPE__UINT64,
ONNX__TENSOR_PROTO__DATA_TYPE__UINT8
};

static
operator_info_tensor
outputs[] = {
{
    .name        = "transposed",
    .optional    = false,
    .variadic    = false,
    .homogeneous = true,
    .constraint  = "T",
    .n_types     = 15,
    .types       = output_tensor_type_transposed
}
};

/* constraints */
static
operator_info_constraint
constraints[] = {
{ "T" }
};

/* operator info */
operator_info
info_operator__onnx__transpose__1 = {
    .name         = "Transpose",
    .range_input  = { 1, 1 },
    .range_output = { 1, 1 },
    .n_attribute  = 1,
    .attribute    = attributes,
    .n_input      = 1,
    .input        = inputs,
    .n_output     = 1,
    .output       = outputs,
    .n_constraint = 1,
    .constraint   = constraints
};
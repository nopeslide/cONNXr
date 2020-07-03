//this file was generated by ../../../../../scripts/onnx_generator/OperatorInfo.py
#include "operators/operator_info.h"
#include "operators/onnx/operator__onnx__add__7.h"

/* attributes */
static
operator_info_attribute
attributes[] = {

};

/* input tensors */
static
uint32_t
input_tensor_type_A[] = {
ONNX__TENSOR_PROTO__DATA_TYPE__DOUBLE,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT16,
ONNX__TENSOR_PROTO__DATA_TYPE__INT32,
ONNX__TENSOR_PROTO__DATA_TYPE__INT64,
ONNX__TENSOR_PROTO__DATA_TYPE__UINT32,
ONNX__TENSOR_PROTO__DATA_TYPE__UINT64
};

static
uint32_t
input_tensor_type_B[] = {
ONNX__TENSOR_PROTO__DATA_TYPE__DOUBLE,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT16,
ONNX__TENSOR_PROTO__DATA_TYPE__INT32,
ONNX__TENSOR_PROTO__DATA_TYPE__INT64,
ONNX__TENSOR_PROTO__DATA_TYPE__UINT32,
ONNX__TENSOR_PROTO__DATA_TYPE__UINT64
};

static
operator_info_tensor
inputs[] = {
{
    .name        = "A",
    .optional    = false,
    .variadic    = false,
    .homogeneous = true,
    .constraint  = "T",
    .n_types     = 7,
    .types       = input_tensor_type_A
},
{
    .name        = "B",
    .optional    = false,
    .variadic    = false,
    .homogeneous = true,
    .constraint  = "T",
    .n_types     = 7,
    .types       = input_tensor_type_B
}
};

/* output tensors */
static
uint32_t
output_tensor_type_C[] = {
ONNX__TENSOR_PROTO__DATA_TYPE__DOUBLE,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT16,
ONNX__TENSOR_PROTO__DATA_TYPE__INT32,
ONNX__TENSOR_PROTO__DATA_TYPE__INT64,
ONNX__TENSOR_PROTO__DATA_TYPE__UINT32,
ONNX__TENSOR_PROTO__DATA_TYPE__UINT64
};

static
operator_info_tensor
outputs[] = {
{
    .name        = "C",
    .optional    = false,
    .variadic    = false,
    .homogeneous = true,
    .constraint  = "T",
    .n_types     = 7,
    .types       = output_tensor_type_C
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
info_operator__onnx__add__7 = {
    .name         = "Add",
    .range_input  = { 2, 2 },
    .range_output = { 1, 1 },
    .n_attribute  = 0,
    .attribute    = attributes,
    .n_input      = 2,
    .input        = inputs,
    .n_output     = 1,
    .output       = outputs,
    .n_constraint = 1,
    .constraint   = constraints
};
//this file was generated by ../../../../../scripts/onnx_generator/OperatorInfo.py
#include "operators/operator_info.h"
#include "operators/onnx/operator__onnx__maxpool__12.h"

/* attributes */
static
operator_info_attribute
attributes[] = {
{
    .name     = "auto_pad",
    .optional = false,
    .type     = ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__STRING
},
{
    .name     = "ceil_mode",
    .optional = false,
    .type     = ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__INT
},
{
    .name     = "dilations",
    .optional = false,
    .type     = ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__INTS
},
{
    .name     = "kernel_shape",
    .optional = true,
    .type     = ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__INTS
},
{
    .name     = "pads",
    .optional = false,
    .type     = ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__INTS
},
{
    .name     = "storage_order",
    .optional = false,
    .type     = ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__INT
},
{
    .name     = "strides",
    .optional = false,
    .type     = ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__INTS
}
};

/* input tensors */
static
uint32_t
input_tensor_type_X[] = {
ONNX__TENSOR_PROTO__DATA_TYPE__DOUBLE,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT16,
ONNX__TENSOR_PROTO__DATA_TYPE__INT8,
ONNX__TENSOR_PROTO__DATA_TYPE__UINT8
};

static
operator_info_tensor
inputs[] = {
{
    .name        = "X",
    .optional    = false,
    .variadic    = false,
    .homogeneous = true,
    .constraint  = "T",
    .n_types     = 5,
    .types       = input_tensor_type_X
}
};

/* output tensors */
static
uint32_t
output_tensor_type_Y[] = {
ONNX__TENSOR_PROTO__DATA_TYPE__DOUBLE,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT16,
ONNX__TENSOR_PROTO__DATA_TYPE__INT8,
ONNX__TENSOR_PROTO__DATA_TYPE__UINT8
};

static
uint32_t
output_tensor_type_Indices[] = {
ONNX__TENSOR_PROTO__DATA_TYPE__INT64
};

static
operator_info_tensor
outputs[] = {
{
    .name        = "Y",
    .optional    = false,
    .variadic    = false,
    .homogeneous = true,
    .constraint  = "T",
    .n_types     = 5,
    .types       = output_tensor_type_Y
},
{
    .name        = "Indices",
    .optional    = true,
    .variadic    = true,
    .homogeneous = true,
    .constraint  = "I",
    .n_types     = 1,
    .types       = output_tensor_type_Indices
}
};

/* constraints */
static
operator_info_constraint
constraints[] = {
{ "T" },
{ "I" }
};

/* operator info */
operator_info
info_operator__onnx__maxpool__12 = {
    .name         = "MaxPool",
    .range_input  = { 1, 1 },
    .range_output = { 1, 2 },
    .n_attribute  = 7,
    .attribute    = attributes,
    .n_input      = 1,
    .input        = inputs,
    .n_output     = 2,
    .output       = outputs,
    .n_constraint = 2,
    .constraint   = constraints
};
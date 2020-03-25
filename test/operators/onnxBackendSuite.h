#ifndef ONNXBACKENDTEST_H
#define ONNXBACKENDTEST_H

#include <CUnit/Basic.h>
#include "operators/test_onnx_backend_operators.h"
#include "operators/test_onnx_backend_operators_active.h"

#ifndef STR
#define STR(X) _STR(X)
#define _STR(X) #X
#endif

#define ADD_TEST_OPERATOR(name) CU_set_test_active(CU_add_test( onnxBackendSuite, "test_" STR(name), test_ ## name  ), TEST_ ## name )

int onnxBackendSuite_init(void)
{
  return 0;
}

int onnxBackendSuite_clean(void)
{
  return 0;
}

void onnxBackendSuite_addTestCases(CU_pSuite onnxBackendSuite ) {
  ADD_TEST_OPERATOR(abs);
  ADD_TEST_OPERATOR(acos);
  ADD_TEST_OPERATOR(acos_example);
  ADD_TEST_OPERATOR(acosh);
  ADD_TEST_OPERATOR(acosh_example);
  ADD_TEST_OPERATOR(add);
  ADD_TEST_OPERATOR(add_bcast);
  ADD_TEST_OPERATOR(and2d);
  ADD_TEST_OPERATOR(and3d);
  ADD_TEST_OPERATOR(and4d);
  ADD_TEST_OPERATOR(and_bcast3v1d);
  ADD_TEST_OPERATOR(and_bcast3v2d);
  ADD_TEST_OPERATOR(and_bcast4v2d);
  ADD_TEST_OPERATOR(and_bcast4v3d);
  ADD_TEST_OPERATOR(and_bcast4v4d);
  ADD_TEST_OPERATOR(argmax_default_axis_example);
  ADD_TEST_OPERATOR(argmax_default_axis_example_select_last_index);
  ADD_TEST_OPERATOR(argmax_default_axis_random);
  ADD_TEST_OPERATOR(argmax_default_axis_random_select_last_index);
  ADD_TEST_OPERATOR(argmax_keepdims_example);
  ADD_TEST_OPERATOR(argmax_keepdims_example_select_last_index);
  ADD_TEST_OPERATOR(argmax_keepdims_random);
  ADD_TEST_OPERATOR(argmax_keepdims_random_select_last_index);
  ADD_TEST_OPERATOR(argmax_negative_axis_keepdims_example);
  ADD_TEST_OPERATOR(argmax_negative_axis_keepdims_example_select_last_index);
  ADD_TEST_OPERATOR(argmax_negative_axis_keepdims_random);
  ADD_TEST_OPERATOR(argmax_negative_axis_keepdims_random_select_last_index);
  ADD_TEST_OPERATOR(argmax_no_keepdims_example);
  ADD_TEST_OPERATOR(argmax_no_keepdims_example_select_last_index);
  ADD_TEST_OPERATOR(argmax_no_keepdims_random);
  ADD_TEST_OPERATOR(argmax_no_keepdims_random_select_last_index);
  ADD_TEST_OPERATOR(argmin_default_axis_example);
  ADD_TEST_OPERATOR(argmin_default_axis_example_select_last_index);
  ADD_TEST_OPERATOR(argmin_default_axis_random);
  ADD_TEST_OPERATOR(argmin_default_axis_random_select_last_index);
  ADD_TEST_OPERATOR(argmin_keepdims_example);
  ADD_TEST_OPERATOR(argmin_keepdims_example_select_last_index);
  ADD_TEST_OPERATOR(argmin_keepdims_random);
  ADD_TEST_OPERATOR(argmin_keepdims_random_select_last_index);
  ADD_TEST_OPERATOR(argmin_negative_axis_keepdims_example);
  ADD_TEST_OPERATOR(argmin_negative_axis_keepdims_example_select_last_index);
  ADD_TEST_OPERATOR(argmin_negative_axis_keepdims_random);
  ADD_TEST_OPERATOR(argmin_negative_axis_keepdims_random_select_last_index);
  ADD_TEST_OPERATOR(argmin_no_keepdims_example);
  ADD_TEST_OPERATOR(argmin_no_keepdims_example_select_last_index);
  ADD_TEST_OPERATOR(argmin_no_keepdims_random);
  ADD_TEST_OPERATOR(argmin_no_keepdims_random_select_last_index);
  ADD_TEST_OPERATOR(asin);
  ADD_TEST_OPERATOR(asin_example);
  ADD_TEST_OPERATOR(asinh);
  ADD_TEST_OPERATOR(asinh_example);
  ADD_TEST_OPERATOR(atan);
  ADD_TEST_OPERATOR(atan_example);
  ADD_TEST_OPERATOR(atanh);
  ADD_TEST_OPERATOR(atanh_example);
  ADD_TEST_OPERATOR(averagepool_1d_default);
  ADD_TEST_OPERATOR(averagepool_2d_ceil);
  ADD_TEST_OPERATOR(averagepool_2d_default);
  ADD_TEST_OPERATOR(averagepool_2d_pads);
  ADD_TEST_OPERATOR(averagepool_2d_pads_count_include_pad);
  ADD_TEST_OPERATOR(averagepool_2d_precomputed_pads);
  ADD_TEST_OPERATOR(averagepool_2d_precomputed_pads_count_include_pad);
  ADD_TEST_OPERATOR(averagepool_2d_precomputed_same_upper);
  ADD_TEST_OPERATOR(averagepool_2d_precomputed_strides);
  ADD_TEST_OPERATOR(averagepool_2d_same_lower);
  ADD_TEST_OPERATOR(averagepool_2d_same_upper);
  ADD_TEST_OPERATOR(averagepool_2d_strides);
  ADD_TEST_OPERATOR(averagepool_3d_default);
  ADD_TEST_OPERATOR(basic_conv_with_padding);
  ADD_TEST_OPERATOR(basic_conv_without_padding);
  ADD_TEST_OPERATOR(basic_convinteger);
  ADD_TEST_OPERATOR(batchnorm_epsilon);
  ADD_TEST_OPERATOR(batchnorm_example);
  ADD_TEST_OPERATOR(bitshift_left_uint16);
  ADD_TEST_OPERATOR(bitshift_left_uint32);
  ADD_TEST_OPERATOR(bitshift_left_uint64);
  ADD_TEST_OPERATOR(bitshift_left_uint8);
  ADD_TEST_OPERATOR(bitshift_right_uint16);
  ADD_TEST_OPERATOR(bitshift_right_uint32);
  ADD_TEST_OPERATOR(bitshift_right_uint64);
  ADD_TEST_OPERATOR(bitshift_right_uint8);
  ADD_TEST_OPERATOR(cast_DOUBLE_to_FLOAT);
  ADD_TEST_OPERATOR(cast_DOUBLE_to_FLOAT16);
  ADD_TEST_OPERATOR(cast_FLOAT16_to_DOUBLE);
  ADD_TEST_OPERATOR(cast_FLOAT16_to_FLOAT);
  ADD_TEST_OPERATOR(cast_FLOAT_to_DOUBLE);
  ADD_TEST_OPERATOR(cast_FLOAT_to_FLOAT16);
  ADD_TEST_OPERATOR(cast_FLOAT_to_STRING);
  ADD_TEST_OPERATOR(cast_STRING_to_FLOAT);
  ADD_TEST_OPERATOR(ceil);
  ADD_TEST_OPERATOR(ceil_example);
  ADD_TEST_OPERATOR(clip);
  ADD_TEST_OPERATOR(clip_default_inbounds);
  ADD_TEST_OPERATOR(clip_default_max);
  ADD_TEST_OPERATOR(clip_default_min);
  ADD_TEST_OPERATOR(clip_example);
  ADD_TEST_OPERATOR(clip_inbounds);
  ADD_TEST_OPERATOR(clip_outbounds);
  ADD_TEST_OPERATOR(clip_splitbounds);
  ADD_TEST_OPERATOR(compress_0);
  ADD_TEST_OPERATOR(compress_1);
  ADD_TEST_OPERATOR(compress_default_axis);
  ADD_TEST_OPERATOR(compress_negative_axis);
  ADD_TEST_OPERATOR(concat_1d_axis_0);
  ADD_TEST_OPERATOR(concat_1d_axis_negative_1);
  ADD_TEST_OPERATOR(concat_2d_axis_0);
  ADD_TEST_OPERATOR(concat_2d_axis_1);
  ADD_TEST_OPERATOR(concat_2d_axis_negative_1);
  ADD_TEST_OPERATOR(concat_2d_axis_negative_2);
  ADD_TEST_OPERATOR(concat_3d_axis_0);
  ADD_TEST_OPERATOR(concat_3d_axis_1);
  ADD_TEST_OPERATOR(concat_3d_axis_2);
  ADD_TEST_OPERATOR(concat_3d_axis_negative_1);
  ADD_TEST_OPERATOR(concat_3d_axis_negative_2);
  ADD_TEST_OPERATOR(concat_3d_axis_negative_3);
  ADD_TEST_OPERATOR(constant);
  ADD_TEST_OPERATOR(constant_pad);
  ADD_TEST_OPERATOR(constantofshape_float_ones);
  ADD_TEST_OPERATOR(constantofshape_int_zeros);
  ADD_TEST_OPERATOR(conv_with_strides_and_asymmetric_padding);
  ADD_TEST_OPERATOR(conv_with_strides_no_padding);
  ADD_TEST_OPERATOR(conv_with_strides_padding);
  ADD_TEST_OPERATOR(convinteger_with_padding);
  ADD_TEST_OPERATOR(convtranspose);
  ADD_TEST_OPERATOR(convtranspose_1d);
  ADD_TEST_OPERATOR(convtranspose_3d);
  ADD_TEST_OPERATOR(convtranspose_dilations);
  ADD_TEST_OPERATOR(convtranspose_kernel_shape);
  ADD_TEST_OPERATOR(convtranspose_output_shape);
  ADD_TEST_OPERATOR(convtranspose_pad);
  ADD_TEST_OPERATOR(convtranspose_pads);
  ADD_TEST_OPERATOR(convtranspose_with_kernel);
  ADD_TEST_OPERATOR(cos);
  ADD_TEST_OPERATOR(cos_example);
  ADD_TEST_OPERATOR(cosh);
  ADD_TEST_OPERATOR(cosh_example);
  ADD_TEST_OPERATOR(cumsum_1d);
  ADD_TEST_OPERATOR(cumsum_1d_exclusive);
  ADD_TEST_OPERATOR(cumsum_1d_reverse);
  ADD_TEST_OPERATOR(cumsum_1d_reverse_exclusive);
  ADD_TEST_OPERATOR(cumsum_2d_axis_0);
  ADD_TEST_OPERATOR(cumsum_2d_axis_1);
  ADD_TEST_OPERATOR(cumsum_2d_negative_axis);
  ADD_TEST_OPERATOR(depthtospace_crd_mode);
  ADD_TEST_OPERATOR(depthtospace_crd_mode_example);
  ADD_TEST_OPERATOR(depthtospace_dcr_mode);
  ADD_TEST_OPERATOR(depthtospace_example);
  ADD_TEST_OPERATOR(dequantizelinear);
  ADD_TEST_OPERATOR(det_2d);
  ADD_TEST_OPERATOR(det_nd);
  ADD_TEST_OPERATOR(div);
  ADD_TEST_OPERATOR(div_bcast);
  ADD_TEST_OPERATOR(div_example);
  ADD_TEST_OPERATOR(dropout_default);
  ADD_TEST_OPERATOR(dropout_random);
  ADD_TEST_OPERATOR(dynamicquantizelinear);
  ADD_TEST_OPERATOR(dynamicquantizelinear_expanded);
  ADD_TEST_OPERATOR(dynamicquantizelinear_max_adjusted);
  ADD_TEST_OPERATOR(dynamicquantizelinear_max_adjusted_expanded);
  ADD_TEST_OPERATOR(dynamicquantizelinear_min_adjusted);
  ADD_TEST_OPERATOR(dynamicquantizelinear_min_adjusted_expanded);
  ADD_TEST_OPERATOR(edge_pad);
  ADD_TEST_OPERATOR(elu);
  ADD_TEST_OPERATOR(elu_default);
  ADD_TEST_OPERATOR(elu_example);
  ADD_TEST_OPERATOR(equal);
  ADD_TEST_OPERATOR(equal_bcast);
  ADD_TEST_OPERATOR(erf);
  ADD_TEST_OPERATOR(exp);
  ADD_TEST_OPERATOR(exp_example);
  ADD_TEST_OPERATOR(expand_dim_changed);
  ADD_TEST_OPERATOR(expand_dim_unchanged);
  ADD_TEST_OPERATOR(eyelike_populate_off_main_diagonal);
  ADD_TEST_OPERATOR(eyelike_with_dtype);
  ADD_TEST_OPERATOR(eyelike_without_dtype);
  ADD_TEST_OPERATOR(flatten_axis0);
  ADD_TEST_OPERATOR(flatten_axis1);
  ADD_TEST_OPERATOR(flatten_axis2);
  ADD_TEST_OPERATOR(flatten_axis3);
  ADD_TEST_OPERATOR(flatten_default_axis);
  ADD_TEST_OPERATOR(flatten_negative_axis1);
  ADD_TEST_OPERATOR(flatten_negative_axis2);
  ADD_TEST_OPERATOR(flatten_negative_axis3);
  ADD_TEST_OPERATOR(flatten_negative_axis4);
  ADD_TEST_OPERATOR(floor);
  ADD_TEST_OPERATOR(floor_example);
  ADD_TEST_OPERATOR(gather_0);
  ADD_TEST_OPERATOR(gather_1);
  ADD_TEST_OPERATOR(gather_elements_0);
  ADD_TEST_OPERATOR(gather_elements_1);
  ADD_TEST_OPERATOR(gather_elements_negative_indices);
  ADD_TEST_OPERATOR(gather_negative_indices);
  ADD_TEST_OPERATOR(gathernd_example_float32);
  ADD_TEST_OPERATOR(gathernd_example_int32);
  ADD_TEST_OPERATOR(gemm_all_attributes);
  ADD_TEST_OPERATOR(gemm_alpha);
  ADD_TEST_OPERATOR(gemm_beta);
  ADD_TEST_OPERATOR(gemm_default_matrix_bias);
  ADD_TEST_OPERATOR(gemm_default_no_bias);
  ADD_TEST_OPERATOR(gemm_default_scalar_bias);
  ADD_TEST_OPERATOR(gemm_default_single_elem_vector_bias);
  ADD_TEST_OPERATOR(gemm_default_vector_bias);
  ADD_TEST_OPERATOR(gemm_default_zero_bias);
  ADD_TEST_OPERATOR(gemm_transposeA);
  ADD_TEST_OPERATOR(gemm_transposeB);
  ADD_TEST_OPERATOR(globalaveragepool);
  ADD_TEST_OPERATOR(globalaveragepool_precomputed);
  ADD_TEST_OPERATOR(globalmaxpool);
  ADD_TEST_OPERATOR(globalmaxpool_precomputed);
  ADD_TEST_OPERATOR(greater);
  ADD_TEST_OPERATOR(greater_bcast);
  ADD_TEST_OPERATOR(gru_defaults);
  ADD_TEST_OPERATOR(gru_seq_length);
  ADD_TEST_OPERATOR(gru_with_initial_bias);
  ADD_TEST_OPERATOR(hardmax_axis_0);
  ADD_TEST_OPERATOR(hardmax_axis_1);
  ADD_TEST_OPERATOR(hardmax_axis_2);
  ADD_TEST_OPERATOR(hardmax_default_axis);
  ADD_TEST_OPERATOR(hardmax_example);
  ADD_TEST_OPERATOR(hardmax_negative_axis);
  ADD_TEST_OPERATOR(hardmax_one_hot);
  ADD_TEST_OPERATOR(hardsigmoid);
  ADD_TEST_OPERATOR(hardsigmoid_default);
  ADD_TEST_OPERATOR(hardsigmoid_example);
  ADD_TEST_OPERATOR(identity);
  ADD_TEST_OPERATOR(instancenorm_epsilon);
  ADD_TEST_OPERATOR(instancenorm_example);
  ADD_TEST_OPERATOR(isinf);
  ADD_TEST_OPERATOR(isinf_negative);
  ADD_TEST_OPERATOR(isinf_positive);
  ADD_TEST_OPERATOR(isnan);
  ADD_TEST_OPERATOR(leakyrelu);
  ADD_TEST_OPERATOR(leakyrelu_default);
  ADD_TEST_OPERATOR(leakyrelu_example);
  ADD_TEST_OPERATOR(less);
  ADD_TEST_OPERATOR(less_bcast);
  ADD_TEST_OPERATOR(log);
  ADD_TEST_OPERATOR(log_example);
  ADD_TEST_OPERATOR(logsoftmax_axis_0);
  ADD_TEST_OPERATOR(logsoftmax_axis_1);
  ADD_TEST_OPERATOR(logsoftmax_axis_2);
  ADD_TEST_OPERATOR(logsoftmax_default_axis);
  ADD_TEST_OPERATOR(logsoftmax_example_1);
  ADD_TEST_OPERATOR(logsoftmax_large_number);
  ADD_TEST_OPERATOR(logsoftmax_negative_axis);
  ADD_TEST_OPERATOR(lrn);
  ADD_TEST_OPERATOR(lrn_default);
  ADD_TEST_OPERATOR(lstm_defaults);
  ADD_TEST_OPERATOR(lstm_with_initial_bias);
  ADD_TEST_OPERATOR(lstm_with_peepholes);
  ADD_TEST_OPERATOR(matmul_2d);
  ADD_TEST_OPERATOR(matmul_3d);
  ADD_TEST_OPERATOR(matmul_4d);
  ADD_TEST_OPERATOR(matmulinteger);
  ADD_TEST_OPERATOR(max_example);
  ADD_TEST_OPERATOR(max_one_input);
  ADD_TEST_OPERATOR(max_two_inputs);
  ADD_TEST_OPERATOR(maxpool_1d_default);
  ADD_TEST_OPERATOR(maxpool_2d_ceil);
  ADD_TEST_OPERATOR(maxpool_2d_default);
  ADD_TEST_OPERATOR(maxpool_2d_dilations);
  ADD_TEST_OPERATOR(maxpool_2d_pads);
  ADD_TEST_OPERATOR(maxpool_2d_precomputed_pads);
  ADD_TEST_OPERATOR(maxpool_2d_precomputed_same_upper);
  ADD_TEST_OPERATOR(maxpool_2d_precomputed_strides);
  ADD_TEST_OPERATOR(maxpool_2d_same_lower);
  ADD_TEST_OPERATOR(maxpool_2d_same_upper);
  ADD_TEST_OPERATOR(maxpool_2d_strides);
  ADD_TEST_OPERATOR(maxpool_3d_default);
  ADD_TEST_OPERATOR(maxpool_with_argmax_2d_precomputed_pads);
  ADD_TEST_OPERATOR(maxpool_with_argmax_2d_precomputed_strides);
  ADD_TEST_OPERATOR(maxunpool_export_with_output_shape);
  ADD_TEST_OPERATOR(maxunpool_export_without_output_shape);
  ADD_TEST_OPERATOR(mean_example);
  ADD_TEST_OPERATOR(mean_one_input);
  ADD_TEST_OPERATOR(mean_two_inputs);
  ADD_TEST_OPERATOR(min_example);
  ADD_TEST_OPERATOR(min_one_input);
  ADD_TEST_OPERATOR(min_two_inputs);
  ADD_TEST_OPERATOR(mod_broadcast);
  ADD_TEST_OPERATOR(mod_int64_fmod);
  ADD_TEST_OPERATOR(mod_mixed_sign_float16);
  ADD_TEST_OPERATOR(mod_mixed_sign_float32);
  ADD_TEST_OPERATOR(mod_mixed_sign_float64);
  ADD_TEST_OPERATOR(mod_mixed_sign_int16);
  ADD_TEST_OPERATOR(mod_mixed_sign_int32);
  ADD_TEST_OPERATOR(mod_mixed_sign_int64);
  ADD_TEST_OPERATOR(mod_mixed_sign_int8);
  ADD_TEST_OPERATOR(mod_uint16);
  ADD_TEST_OPERATOR(mod_uint32);
  ADD_TEST_OPERATOR(mod_uint64);
  ADD_TEST_OPERATOR(mod_uint8);
  ADD_TEST_OPERATOR(mul);
  ADD_TEST_OPERATOR(mul_bcast);
  ADD_TEST_OPERATOR(mul_example);
  ADD_TEST_OPERATOR(mvn);
  ADD_TEST_OPERATOR(mvn_expanded);
  ADD_TEST_OPERATOR(neg);
  ADD_TEST_OPERATOR(neg_example);
  ADD_TEST_OPERATOR(nonmaxsuppression_center_point_box_format);
  ADD_TEST_OPERATOR(nonmaxsuppression_flipped_coordinates);
  ADD_TEST_OPERATOR(nonmaxsuppression_identical_boxes);
  ADD_TEST_OPERATOR(nonmaxsuppression_limit_output_size);
  ADD_TEST_OPERATOR(nonmaxsuppression_single_box);
  ADD_TEST_OPERATOR(nonmaxsuppression_suppress_by_IOU);
  ADD_TEST_OPERATOR(nonmaxsuppression_suppress_by_IOU_and_scores);
  ADD_TEST_OPERATOR(nonmaxsuppression_two_batches);
  ADD_TEST_OPERATOR(nonmaxsuppression_two_classes);
  ADD_TEST_OPERATOR(nonzero_example);
  ADD_TEST_OPERATOR(not_2d);
  ADD_TEST_OPERATOR(not_3d);
  ADD_TEST_OPERATOR(not_4d);
  ADD_TEST_OPERATOR(onehot_negative_indices);
  ADD_TEST_OPERATOR(onehot_with_axis);
  ADD_TEST_OPERATOR(onehot_with_negative_axis);
  ADD_TEST_OPERATOR(onehot_without_axis);
  ADD_TEST_OPERATOR(or2d);
  ADD_TEST_OPERATOR(or3d);
  ADD_TEST_OPERATOR(or4d);
  ADD_TEST_OPERATOR(or_bcast3v1d);
  ADD_TEST_OPERATOR(or_bcast3v2d);
  ADD_TEST_OPERATOR(or_bcast4v2d);
  ADD_TEST_OPERATOR(or_bcast4v3d);
  ADD_TEST_OPERATOR(or_bcast4v4d);
  ADD_TEST_OPERATOR(pow);
  ADD_TEST_OPERATOR(pow_bcast_array);
  ADD_TEST_OPERATOR(pow_bcast_scalar);
  ADD_TEST_OPERATOR(pow_example);
  ADD_TEST_OPERATOR(prelu_broadcast);
  ADD_TEST_OPERATOR(prelu_example);
  ADD_TEST_OPERATOR(qlinearconv);
  ADD_TEST_OPERATOR(qlinearmatmul_2D);
  ADD_TEST_OPERATOR(qlinearmatmul_3D);
  ADD_TEST_OPERATOR(quantizelinear);
  ADD_TEST_OPERATOR(range_float_type_positive_delta);
  ADD_TEST_OPERATOR(range_float_type_positive_delta_expanded);
  ADD_TEST_OPERATOR(range_int32_type_negative_delta);
  ADD_TEST_OPERATOR(range_int32_type_negative_delta_expanded);
  ADD_TEST_OPERATOR(reciprocal);
  ADD_TEST_OPERATOR(reciprocal_example);
  ADD_TEST_OPERATOR(reduce_l1_default_axes_keepdims_example);
  ADD_TEST_OPERATOR(reduce_l1_default_axes_keepdims_random);
  ADD_TEST_OPERATOR(reduce_l1_do_not_keepdims_example);
  ADD_TEST_OPERATOR(reduce_l1_do_not_keepdims_random);
  ADD_TEST_OPERATOR(reduce_l1_keep_dims_example);
  ADD_TEST_OPERATOR(reduce_l1_keep_dims_random);
  ADD_TEST_OPERATOR(reduce_l1_negative_axes_keep_dims_example);
  ADD_TEST_OPERATOR(reduce_l1_negative_axes_keep_dims_random);
  ADD_TEST_OPERATOR(reduce_l2_default_axes_keepdims_example);
  ADD_TEST_OPERATOR(reduce_l2_default_axes_keepdims_random);
  ADD_TEST_OPERATOR(reduce_l2_do_not_keepdims_example);
  ADD_TEST_OPERATOR(reduce_l2_do_not_keepdims_random);
  ADD_TEST_OPERATOR(reduce_l2_keep_dims_example);
  ADD_TEST_OPERATOR(reduce_l2_keep_dims_random);
  ADD_TEST_OPERATOR(reduce_l2_negative_axes_keep_dims_example);
  ADD_TEST_OPERATOR(reduce_l2_negative_axes_keep_dims_random);
  ADD_TEST_OPERATOR(reduce_log_sum);
  ADD_TEST_OPERATOR(reduce_log_sum_asc_axes);
  ADD_TEST_OPERATOR(reduce_log_sum_default);
  ADD_TEST_OPERATOR(reduce_log_sum_desc_axes);
  ADD_TEST_OPERATOR(reduce_log_sum_exp_default_axes_keepdims_example);
  ADD_TEST_OPERATOR(reduce_log_sum_exp_default_axes_keepdims_random);
  ADD_TEST_OPERATOR(reduce_log_sum_exp_do_not_keepdims_example);
  ADD_TEST_OPERATOR(reduce_log_sum_exp_do_not_keepdims_random);
  ADD_TEST_OPERATOR(reduce_log_sum_exp_keepdims_example);
  ADD_TEST_OPERATOR(reduce_log_sum_exp_keepdims_random);
  ADD_TEST_OPERATOR(reduce_log_sum_exp_negative_axes_keepdims_example);
  ADD_TEST_OPERATOR(reduce_log_sum_exp_negative_axes_keepdims_random);
  ADD_TEST_OPERATOR(reduce_log_sum_negative_axes);
  ADD_TEST_OPERATOR(reduce_max_default_axes_keepdim_example);
  ADD_TEST_OPERATOR(reduce_max_default_axes_keepdims_random);
  ADD_TEST_OPERATOR(reduce_max_do_not_keepdims_example);
  ADD_TEST_OPERATOR(reduce_max_do_not_keepdims_random);
  ADD_TEST_OPERATOR(reduce_max_keepdims_example);
  ADD_TEST_OPERATOR(reduce_max_keepdims_random);
  ADD_TEST_OPERATOR(reduce_max_negative_axes_keepdims_example);
  ADD_TEST_OPERATOR(reduce_max_negative_axes_keepdims_random);
  ADD_TEST_OPERATOR(reduce_mean_default_axes_keepdims_example);
  ADD_TEST_OPERATOR(reduce_mean_default_axes_keepdims_random);
  ADD_TEST_OPERATOR(reduce_mean_do_not_keepdims_example);
  ADD_TEST_OPERATOR(reduce_mean_do_not_keepdims_random);
  ADD_TEST_OPERATOR(reduce_mean_keepdims_example);
  ADD_TEST_OPERATOR(reduce_mean_keepdims_random);
  ADD_TEST_OPERATOR(reduce_mean_negative_axes_keepdims_example);
  ADD_TEST_OPERATOR(reduce_mean_negative_axes_keepdims_random);
  ADD_TEST_OPERATOR(reduce_min_default_axes_keepdims_example);
  ADD_TEST_OPERATOR(reduce_min_default_axes_keepdims_random);
  ADD_TEST_OPERATOR(reduce_min_do_not_keepdims_example);
  ADD_TEST_OPERATOR(reduce_min_do_not_keepdims_random);
  ADD_TEST_OPERATOR(reduce_min_keepdims_example);
  ADD_TEST_OPERATOR(reduce_min_keepdims_random);
  ADD_TEST_OPERATOR(reduce_min_negative_axes_keepdims_example);
  ADD_TEST_OPERATOR(reduce_min_negative_axes_keepdims_random);
  ADD_TEST_OPERATOR(reduce_prod_default_axes_keepdims_example);
  ADD_TEST_OPERATOR(reduce_prod_default_axes_keepdims_random);
  ADD_TEST_OPERATOR(reduce_prod_do_not_keepdims_example);
  ADD_TEST_OPERATOR(reduce_prod_do_not_keepdims_random);
  ADD_TEST_OPERATOR(reduce_prod_keepdims_example);
  ADD_TEST_OPERATOR(reduce_prod_keepdims_random);
  ADD_TEST_OPERATOR(reduce_prod_negative_axes_keepdims_example);
  ADD_TEST_OPERATOR(reduce_prod_negative_axes_keepdims_random);
  ADD_TEST_OPERATOR(reduce_sum_default_axes_keepdims_example);
  ADD_TEST_OPERATOR(reduce_sum_default_axes_keepdims_random);
  ADD_TEST_OPERATOR(reduce_sum_do_not_keepdims_example);
  ADD_TEST_OPERATOR(reduce_sum_do_not_keepdims_random);
  ADD_TEST_OPERATOR(reduce_sum_keepdims_example);
  ADD_TEST_OPERATOR(reduce_sum_keepdims_random);
  ADD_TEST_OPERATOR(reduce_sum_negative_axes_keepdims_example);
  ADD_TEST_OPERATOR(reduce_sum_negative_axes_keepdims_random);
  ADD_TEST_OPERATOR(reduce_sum_square_default_axes_keepdims_example);
  ADD_TEST_OPERATOR(reduce_sum_square_default_axes_keepdims_random);
  ADD_TEST_OPERATOR(reduce_sum_square_do_not_keepdims_example);
  ADD_TEST_OPERATOR(reduce_sum_square_do_not_keepdims_random);
  ADD_TEST_OPERATOR(reduce_sum_square_keepdims_example);
  ADD_TEST_OPERATOR(reduce_sum_square_keepdims_random);
  ADD_TEST_OPERATOR(reduce_sum_square_negative_axes_keepdims_example);
  ADD_TEST_OPERATOR(reduce_sum_square_negative_axes_keepdims_random);
  ADD_TEST_OPERATOR(reflect_pad);
  ADD_TEST_OPERATOR(relu);
  ADD_TEST_OPERATOR(reshape_extended_dims);
  ADD_TEST_OPERATOR(reshape_negative_dim);
  ADD_TEST_OPERATOR(reshape_negative_extended_dims);
  ADD_TEST_OPERATOR(reshape_one_dim);
  ADD_TEST_OPERATOR(reshape_reduced_dims);
  ADD_TEST_OPERATOR(reshape_reordered_all_dims);
  ADD_TEST_OPERATOR(reshape_reordered_last_dims);
  ADD_TEST_OPERATOR(reshape_zero_and_negative_dim);
  ADD_TEST_OPERATOR(reshape_zero_dim);
  ADD_TEST_OPERATOR(resize_downsample_scales_cubic);
  ADD_TEST_OPERATOR(resize_downsample_scales_cubic_A_n0p5_exclude_outside);
  ADD_TEST_OPERATOR(resize_downsample_scales_cubic_align_corners);
  ADD_TEST_OPERATOR(resize_downsample_scales_linear);
  ADD_TEST_OPERATOR(resize_downsample_scales_linear_align_corners);
  ADD_TEST_OPERATOR(resize_downsample_scales_nearest);
  ADD_TEST_OPERATOR(resize_downsample_sizes_cubic);
  ADD_TEST_OPERATOR(resize_downsample_sizes_linear_pytorch_half_pixel);
  ADD_TEST_OPERATOR(resize_downsample_sizes_nearest);
  ADD_TEST_OPERATOR(resize_downsample_sizes_nearest_tf_half_pixel_for_nn);
  ADD_TEST_OPERATOR(resize_tf_crop_and_resize);
  ADD_TEST_OPERATOR(resize_upsample_scales_cubic);
  ADD_TEST_OPERATOR(resize_upsample_scales_cubic_A_n0p5_exclude_outside);
  ADD_TEST_OPERATOR(resize_upsample_scales_cubic_align_corners);
  ADD_TEST_OPERATOR(resize_upsample_scales_cubic_asymmetric);
  ADD_TEST_OPERATOR(resize_upsample_scales_linear);
  ADD_TEST_OPERATOR(resize_upsample_scales_linear_align_corners);
  ADD_TEST_OPERATOR(resize_upsample_scales_nearest);
  ADD_TEST_OPERATOR(resize_upsample_sizes_cubic);
  ADD_TEST_OPERATOR(resize_upsample_sizes_nearest);
  ADD_TEST_OPERATOR(resize_upsample_sizes_nearest_ceil_half_pixel);
  ADD_TEST_OPERATOR(resize_upsample_sizes_nearest_floor_align_corners);
  ADD_TEST_OPERATOR(resize_upsample_sizes_nearest_round_prefer_ceil_asymmetric);
  ADD_TEST_OPERATOR(reversesequence_batch);
  ADD_TEST_OPERATOR(reversesequence_time);
  ADD_TEST_OPERATOR(rnn_seq_length);
  ADD_TEST_OPERATOR(roialign);
  ADD_TEST_OPERATOR(round);
  ADD_TEST_OPERATOR(scan9_sum);
  ADD_TEST_OPERATOR(scan_sum);
  ADD_TEST_OPERATOR(scatter_elements_with_axis);
  ADD_TEST_OPERATOR(scatter_elements_with_negative_indices);
  ADD_TEST_OPERATOR(scatter_elements_without_axis);
  ADD_TEST_OPERATOR(scatter_with_axis);
  ADD_TEST_OPERATOR(scatter_without_axis);
  ADD_TEST_OPERATOR(scatternd);
  ADD_TEST_OPERATOR(selu);
  ADD_TEST_OPERATOR(selu_default);
  ADD_TEST_OPERATOR(selu_example);
  ADD_TEST_OPERATOR(shape);
  ADD_TEST_OPERATOR(shape_example);
  ADD_TEST_OPERATOR(shrink_hard);
  ADD_TEST_OPERATOR(shrink_soft);
  ADD_TEST_OPERATOR(sigmoid);
  ADD_TEST_OPERATOR(sigmoid_example);
  ADD_TEST_OPERATOR(sign);
  ADD_TEST_OPERATOR(simple_rnn_defaults);
  ADD_TEST_OPERATOR(simple_rnn_with_initial_bias);
  ADD_TEST_OPERATOR(sin);
  ADD_TEST_OPERATOR(sin_example);
  ADD_TEST_OPERATOR(sinh);
  ADD_TEST_OPERATOR(sinh_example);
  ADD_TEST_OPERATOR(size);
  ADD_TEST_OPERATOR(size_example);
  ADD_TEST_OPERATOR(slice);
  ADD_TEST_OPERATOR(slice_default_axes);
  ADD_TEST_OPERATOR(slice_default_steps);
  ADD_TEST_OPERATOR(slice_end_out_of_bounds);
  ADD_TEST_OPERATOR(slice_neg);
  ADD_TEST_OPERATOR(slice_neg_steps);
  ADD_TEST_OPERATOR(slice_negative_axes);
  ADD_TEST_OPERATOR(slice_start_out_of_bounds);
  ADD_TEST_OPERATOR(softmax_axis_0);
  ADD_TEST_OPERATOR(softmax_axis_1);
  ADD_TEST_OPERATOR(softmax_axis_2);
  ADD_TEST_OPERATOR(softmax_default_axis);
  ADD_TEST_OPERATOR(softmax_example);
  ADD_TEST_OPERATOR(softmax_large_number);
  ADD_TEST_OPERATOR(softmax_negative_axis);
  ADD_TEST_OPERATOR(softplus);
  ADD_TEST_OPERATOR(softplus_example);
  ADD_TEST_OPERATOR(softsign);
  ADD_TEST_OPERATOR(softsign_example);
  ADD_TEST_OPERATOR(split_equal_parts_1d);
  ADD_TEST_OPERATOR(split_equal_parts_2d);
  ADD_TEST_OPERATOR(split_equal_parts_default_axis);
  ADD_TEST_OPERATOR(split_variable_parts_1d);
  ADD_TEST_OPERATOR(split_variable_parts_2d);
  ADD_TEST_OPERATOR(split_variable_parts_default_axis);
  ADD_TEST_OPERATOR(sqrt);
  ADD_TEST_OPERATOR(sqrt_example);
  ADD_TEST_OPERATOR(squeeze);
  ADD_TEST_OPERATOR(squeeze_negative_axes);
  ADD_TEST_OPERATOR(strnormalizer_export_monday_casesensintive_lower);
  ADD_TEST_OPERATOR(strnormalizer_export_monday_casesensintive_nochangecase);
  ADD_TEST_OPERATOR(strnormalizer_export_monday_casesensintive_upper);
  ADD_TEST_OPERATOR(strnormalizer_export_monday_empty_output);
  ADD_TEST_OPERATOR(strnormalizer_export_monday_insensintive_upper_twodim);
  ADD_TEST_OPERATOR(strnormalizer_nostopwords_nochangecase);
  ADD_TEST_OPERATOR(sub);
  ADD_TEST_OPERATOR(sub_bcast);
  ADD_TEST_OPERATOR(sub_example);
  ADD_TEST_OPERATOR(sum_example);
  ADD_TEST_OPERATOR(sum_one_input);
  ADD_TEST_OPERATOR(sum_two_inputs);
  ADD_TEST_OPERATOR(tan);
  ADD_TEST_OPERATOR(tan_example);
  ADD_TEST_OPERATOR(tanh);
  ADD_TEST_OPERATOR(tanh_example);
  ADD_TEST_OPERATOR(tfidfvectorizer_tf_batch_onlybigrams_skip0);
  ADD_TEST_OPERATOR(tfidfvectorizer_tf_batch_onlybigrams_skip5);
  ADD_TEST_OPERATOR(tfidfvectorizer_tf_batch_uniandbigrams_skip5);
  ADD_TEST_OPERATOR(tfidfvectorizer_tf_only_bigrams_skip0);
  ADD_TEST_OPERATOR(tfidfvectorizer_tf_onlybigrams_levelempty);
  ADD_TEST_OPERATOR(tfidfvectorizer_tf_onlybigrams_skip5);
  ADD_TEST_OPERATOR(tfidfvectorizer_tf_uniandbigrams_skip5);
  ADD_TEST_OPERATOR(thresholdedrelu);
  ADD_TEST_OPERATOR(thresholdedrelu_default);
  ADD_TEST_OPERATOR(thresholdedrelu_example);
  ADD_TEST_OPERATOR(tile);
  ADD_TEST_OPERATOR(tile_precomputed);
  ADD_TEST_OPERATOR(top_k);
  ADD_TEST_OPERATOR(top_k_negative_axis);
  ADD_TEST_OPERATOR(top_k_smallest);
  ADD_TEST_OPERATOR(transpose_all_permutations_0);
  ADD_TEST_OPERATOR(transpose_all_permutations_1);
  ADD_TEST_OPERATOR(transpose_all_permutations_2);
  ADD_TEST_OPERATOR(transpose_all_permutations_3);
  ADD_TEST_OPERATOR(transpose_all_permutations_4);
  ADD_TEST_OPERATOR(transpose_all_permutations_5);
  ADD_TEST_OPERATOR(transpose_default);
  ADD_TEST_OPERATOR(unique_not_sorted_without_axis);
  ADD_TEST_OPERATOR(unique_sorted_with_axis);
  ADD_TEST_OPERATOR(unique_sorted_with_axis_3d);
  ADD_TEST_OPERATOR(unique_sorted_with_negative_axis);
  ADD_TEST_OPERATOR(unique_sorted_without_axis);
  ADD_TEST_OPERATOR(unsqueeze_axis_0);
  ADD_TEST_OPERATOR(unsqueeze_axis_1);
  ADD_TEST_OPERATOR(unsqueeze_axis_2);
  ADD_TEST_OPERATOR(unsqueeze_axis_3);
  ADD_TEST_OPERATOR(unsqueeze_negative_axes);
  ADD_TEST_OPERATOR(unsqueeze_three_axes);
  ADD_TEST_OPERATOR(unsqueeze_two_axes);
  ADD_TEST_OPERATOR(unsqueeze_unsorted_axes);
  ADD_TEST_OPERATOR(upsample_nearest);
  ADD_TEST_OPERATOR(where_example);
  ADD_TEST_OPERATOR(where_long_example);
  ADD_TEST_OPERATOR(xor2d);
  ADD_TEST_OPERATOR(xor3d);
  ADD_TEST_OPERATOR(xor4d);
  ADD_TEST_OPERATOR(xor_bcast3v1d);
  ADD_TEST_OPERATOR(xor_bcast3v2d);
  ADD_TEST_OPERATOR(xor_bcast4v2d);
  ADD_TEST_OPERATOR(xor_bcast4v3d);
  ADD_TEST_OPERATOR(xor_bcast4v4d);
}

#endif
/**
  ******************************************************************************
  * @file    network.h
  * @date    2026-11-19T08:52:37+0100
  * @brief   ST.AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */
#ifndef STAI_NETWORK_DETAILS_H
#define STAI_NETWORK_DETAILS_H

#include "stai.h"
#include "layers.h"

const stai_network_details g_network_details = {
  .tensors = (const stai_tensor[85]) {
   { .size_bytes = 49152, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_U8, .shape = {4, (const int32_t[4]){1, 128, 128, 3}}, .scale = {1, (const float[1]){0.007843137718737125}}, .zeropoint = {1, (const int16_t[1]){127}}, .name = "serving_default_input_10_output" },
   { .size_bytes = 49153, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 128, 128, 3}}, .scale = {1, (const float[1]){0.007843137718737125}}, .zeropoint = {1, (const int16_t[1]){-1}}, .name = "conversion_0_output" },
   { .size_bytes = 65536, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 64, 64, 16}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_1_output" },
   { .size_bytes = 69696, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 66, 66, 16}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_2_pad_before_output" },
   { .size_bytes = 65536, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 64, 64, 16}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_2_output" },
   { .size_bytes = 32768, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 64, 64, 8}}, .scale = {1, (const float[1]){0.5396429300308228}}, .zeropoint = {1, (const int16_t[1]){-4}}, .name = "conv2d_3_output" },
   { .size_bytes = 196608, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 64, 64, 48}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_4_output" },
   { .size_bytes = 202800, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 65, 65, 48}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_6_pad_before_output" },
   { .size_bytes = 49152, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 32, 32, 48}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_6_output" },
   { .size_bytes = 8192, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 32, 32, 8}}, .scale = {1, (const float[1]){0.5119157433509827}}, .zeropoint = {1, (const int16_t[1]){4}}, .name = "conv2d_7_output" },
   { .size_bytes = 49152, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 32, 32, 48}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_8_output" },
   { .size_bytes = 55488, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 34, 34, 48}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_9_pad_before_output" },
   { .size_bytes = 49152, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 32, 32, 48}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_9_output" },
   { .size_bytes = 8192, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 32, 32, 8}}, .scale = {1, (const float[1]){0.8414077162742615}}, .zeropoint = {1, (const int16_t[1]){-4}}, .name = "conv2d_10_output" },
   { .size_bytes = 8192, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 32, 32, 8}}, .scale = {1, (const float[1]){0.760722279548645}}, .zeropoint = {1, (const int16_t[1]){-8}}, .name = "eltwise_11_output" },
   { .size_bytes = 49152, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 32, 32, 48}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_12_output" },
   { .size_bytes = 52272, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 33, 33, 48}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_14_pad_before_output" },
   { .size_bytes = 12288, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 16, 16, 48}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_14_output" },
   { .size_bytes = 4096, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 16, 16, 16}}, .scale = {1, (const float[1]){0.37722113728523254}}, .zeropoint = {1, (const int16_t[1]){0}}, .name = "conv2d_15_output" },
   { .size_bytes = 24576, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 16, 16, 96}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_16_output" },
   { .size_bytes = 31104, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 18, 18, 96}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_17_pad_before_output" },
   { .size_bytes = 24576, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 16, 16, 96}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_17_output" },
   { .size_bytes = 4096, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 16, 16, 16}}, .scale = {1, (const float[1]){0.39114534854888916}}, .zeropoint = {1, (const int16_t[1]){8}}, .name = "conv2d_18_output" },
   { .size_bytes = 4096, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 16, 16, 16}}, .scale = {1, (const float[1]){0.5352639555931091}}, .zeropoint = {1, (const int16_t[1]){7}}, .name = "eltwise_19_output" },
   { .size_bytes = 24576, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 16, 16, 96}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_20_output" },
   { .size_bytes = 31104, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 18, 18, 96}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_21_pad_before_output" },
   { .size_bytes = 24576, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 16, 16, 96}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_21_output" },
   { .size_bytes = 4096, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 16, 16, 16}}, .scale = {1, (const float[1]){0.4767405092716217}}, .zeropoint = {1, (const int16_t[1]){22}}, .name = "conv2d_22_output" },
   { .size_bytes = 4096, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 16, 16, 16}}, .scale = {1, (const float[1]){0.7033672332763672}}, .zeropoint = {1, (const int16_t[1]){26}}, .name = "eltwise_23_output" },
   { .size_bytes = 24576, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 16, 16, 96}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_24_output" },
   { .size_bytes = 27744, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 17, 17, 96}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_26_pad_before_output" },
   { .size_bytes = 6144, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 8, 8, 96}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_26_output" },
   { .size_bytes = 1536, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 8, 8, 24}}, .scale = {1, (const float[1]){0.3565429747104645}}, .zeropoint = {1, (const int16_t[1]){1}}, .name = "conv2d_27_output" },
   { .size_bytes = 9216, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 8, 8, 144}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_28_output" },
   { .size_bytes = 14400, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 10, 10, 144}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_29_pad_before_output" },
   { .size_bytes = 9216, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 8, 8, 144}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_29_output" },
   { .size_bytes = 1536, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 8, 8, 24}}, .scale = {1, (const float[1]){0.27032336592674255}}, .zeropoint = {1, (const int16_t[1]){-23}}, .name = "conv2d_30_output" },
   { .size_bytes = 1536, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 8, 8, 24}}, .scale = {1, (const float[1]){0.36129915714263916}}, .zeropoint = {1, (const int16_t[1]){-3}}, .name = "eltwise_31_output" },
   { .size_bytes = 9216, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 8, 8, 144}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_32_output" },
   { .size_bytes = 14400, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 10, 10, 144}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_33_pad_before_output" },
   { .size_bytes = 9216, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 8, 8, 144}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_33_output" },
   { .size_bytes = 1536, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 8, 8, 24}}, .scale = {1, (const float[1]){0.27607882022857666}}, .zeropoint = {1, (const int16_t[1]){-3}}, .name = "conv2d_34_output" },
   { .size_bytes = 1536, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 8, 8, 24}}, .scale = {1, (const float[1]){0.41214460134506226}}, .zeropoint = {1, (const int16_t[1]){-19}}, .name = "eltwise_35_output" },
   { .size_bytes = 9216, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 8, 8, 144}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_36_output" },
   { .size_bytes = 14400, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 10, 10, 144}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_37_pad_before_output" },
   { .size_bytes = 9216, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 8, 8, 144}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_37_output" },
   { .size_bytes = 1536, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 8, 8, 24}}, .scale = {1, (const float[1]){0.26505962014198303}}, .zeropoint = {1, (const int16_t[1]){31}}, .name = "conv2d_38_output" },
   { .size_bytes = 1536, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 8, 8, 24}}, .scale = {1, (const float[1]){0.40426111221313477}}, .zeropoint = {1, (const int16_t[1]){13}}, .name = "eltwise_39_output" },
   { .size_bytes = 9216, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 8, 8, 144}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_40_output" },
   { .size_bytes = 14400, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 10, 10, 144}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_41_pad_before_output" },
   { .size_bytes = 9216, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 8, 8, 144}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_41_output" },
   { .size_bytes = 2048, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 8, 8, 32}}, .scale = {1, (const float[1]){0.30158552527427673}}, .zeropoint = {1, (const int16_t[1]){-9}}, .name = "conv2d_42_output" },
   { .size_bytes = 12288, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 8, 8, 192}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_43_output" },
   { .size_bytes = 19200, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 10, 10, 192}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_44_pad_before_output" },
   { .size_bytes = 12288, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 8, 8, 192}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_44_output" },
   { .size_bytes = 2048, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 8, 8, 32}}, .scale = {1, (const float[1]){0.3454863429069519}}, .zeropoint = {1, (const int16_t[1]){32}}, .name = "conv2d_45_output" },
   { .size_bytes = 2048, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 8, 8, 32}}, .scale = {1, (const float[1]){0.4186769723892212}}, .zeropoint = {1, (const int16_t[1]){16}}, .name = "eltwise_46_output" },
   { .size_bytes = 12288, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 8, 8, 192}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_47_output" },
   { .size_bytes = 19200, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 10, 10, 192}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_48_pad_before_output" },
   { .size_bytes = 12288, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 8, 8, 192}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_48_output" },
   { .size_bytes = 2048, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 8, 8, 32}}, .scale = {1, (const float[1]){0.37066665291786194}}, .zeropoint = {1, (const int16_t[1]){-27}}, .name = "conv2d_49_output" },
   { .size_bytes = 2048, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 8, 8, 32}}, .scale = {1, (const float[1]){0.4627127945423126}}, .zeropoint = {1, (const int16_t[1]){-17}}, .name = "eltwise_50_output" },
   { .size_bytes = 12288, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 8, 8, 192}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_51_output" },
   { .size_bytes = 15552, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 9, 9, 192}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_53_pad_before_output" },
   { .size_bytes = 3072, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 4, 4, 192}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_53_output" },
   { .size_bytes = 896, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 4, 4, 56}}, .scale = {1, (const float[1]){0.2366969734430313}}, .zeropoint = {1, (const int16_t[1]){-1}}, .name = "conv2d_54_output" },
   { .size_bytes = 5376, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 4, 4, 336}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_55_output" },
   { .size_bytes = 12096, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 6, 6, 336}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_56_pad_before_output" },
   { .size_bytes = 5376, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 4, 4, 336}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_56_output" },
   { .size_bytes = 896, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 4, 4, 56}}, .scale = {1, (const float[1]){0.21895815432071686}}, .zeropoint = {1, (const int16_t[1]){-4}}, .name = "conv2d_57_output" },
   { .size_bytes = 896, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 4, 4, 56}}, .scale = {1, (const float[1]){0.27853357791900635}}, .zeropoint = {1, (const int16_t[1]){5}}, .name = "eltwise_58_output" },
   { .size_bytes = 5376, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 4, 4, 336}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_59_output" },
   { .size_bytes = 12096, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 6, 6, 336}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_60_pad_before_output" },
   { .size_bytes = 5376, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 4, 4, 336}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_60_output" },
   { .size_bytes = 896, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 4, 4, 56}}, .scale = {1, (const float[1]){0.37031158804893494}}, .zeropoint = {1, (const int16_t[1]){-6}}, .name = "conv2d_61_output" },
   { .size_bytes = 896, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 4, 4, 56}}, .scale = {1, (const float[1]){0.43698886036872864}}, .zeropoint = {1, (const int16_t[1]){-6}}, .name = "eltwise_62_output" },
   { .size_bytes = 5376, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 4, 4, 336}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_63_output" },
   { .size_bytes = 12096, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 6, 6, 336}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_64_pad_before_output" },
   { .size_bytes = 5376, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 4, 4, 336}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_64_output" },
   { .size_bytes = 1792, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 4, 4, 112}}, .scale = {1, (const float[1]){0.16787824034690857}}, .zeropoint = {1, (const int16_t[1]){2}}, .name = "conv2d_65_output" },
   { .size_bytes = 20480, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 4, 4, 1280}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "conv2d_66_output" },
   { .size_bytes = 1280, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {4, (const int32_t[4]){1, 1, 1, 1280}}, .scale = {1, (const float[1]){0.0235294122248888}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "pool_67_output0" },
   { .size_bytes = 1000, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {2, (const int32_t[2]){1, 1000}}, .scale = {1, (const float[1]){0.10456321388483047}}, .zeropoint = {1, (const int16_t[1]){-53}}, .name = "gemm_68_output" },
   { .size_bytes = 1000, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_S8, .shape = {2, (const int32_t[2]){1, 1000}}, .scale = {1, (const float[1]){0.00390625}}, .zeropoint = {1, (const int16_t[1]){-128}}, .name = "nl_69_output" },
   { .size_bytes = 4000, .flags = (STAI_FLAG_HAS_BATCH|STAI_FLAG_CHANNEL_LAST), .format = STAI_FORMAT_FLOAT32, .shape = {2, (const int32_t[2]){1, 1000}}, .scale = {0, NULL}, .zeropoint = {0, NULL}, .name = "conversion_70_output" }
  },
  .nodes = (const stai_node_details[84]){
    {.id = 0, .type = AI_LAYER_NL_TYPE, .input_tensors = {1, (const int32_t[1]){0}}, .output_tensors = {1, (const int32_t[1]){1}} }, /* conversion_0 */
    {.id = 1, .type = AI_LAYER_OPTIMIZED_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){1}}, .output_tensors = {1, (const int32_t[1]){2}} }, /* conv2d_1 */
    {.id = 2, .type = AI_LAYER_PAD_TYPE, .input_tensors = {1, (const int32_t[1]){2}}, .output_tensors = {1, (const int32_t[1]){3}} }, /* conv2d_2_pad_before */
    {.id = 2, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){3}}, .output_tensors = {1, (const int32_t[1]){4}} }, /* conv2d_2 */
    {.id = 3, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){4}}, .output_tensors = {1, (const int32_t[1]){5}} }, /* conv2d_3 */
    {.id = 4, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){5}}, .output_tensors = {1, (const int32_t[1]){6}} }, /* conv2d_4 */
    {.id = 5, .type = AI_LAYER_PAD_TYPE, .input_tensors = {1, (const int32_t[1]){6}}, .output_tensors = {1, (const int32_t[1]){7}} }, /* conv2d_6_pad_before */
    {.id = 6, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){7}}, .output_tensors = {1, (const int32_t[1]){8}} }, /* conv2d_6 */
    {.id = 7, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){8}}, .output_tensors = {1, (const int32_t[1]){9}} }, /* conv2d_7 */
    {.id = 8, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){9}}, .output_tensors = {1, (const int32_t[1]){10}} }, /* conv2d_8 */
    {.id = 9, .type = AI_LAYER_PAD_TYPE, .input_tensors = {1, (const int32_t[1]){10}}, .output_tensors = {1, (const int32_t[1]){11}} }, /* conv2d_9_pad_before */
    {.id = 9, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){11}}, .output_tensors = {1, (const int32_t[1]){12}} }, /* conv2d_9 */
    {.id = 10, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){12}}, .output_tensors = {1, (const int32_t[1]){13}} }, /* conv2d_10 */
    {.id = 11, .type = AI_LAYER_ELTWISE_INTEGER_TYPE, .input_tensors = {2, (const int32_t[2]){9, 13}}, .output_tensors = {1, (const int32_t[1]){14}} }, /* eltwise_11 */
    {.id = 12, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){14}}, .output_tensors = {1, (const int32_t[1]){15}} }, /* conv2d_12 */
    {.id = 13, .type = AI_LAYER_PAD_TYPE, .input_tensors = {1, (const int32_t[1]){15}}, .output_tensors = {1, (const int32_t[1]){16}} }, /* conv2d_14_pad_before */
    {.id = 14, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){16}}, .output_tensors = {1, (const int32_t[1]){17}} }, /* conv2d_14 */
    {.id = 15, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){17}}, .output_tensors = {1, (const int32_t[1]){18}} }, /* conv2d_15 */
    {.id = 16, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){18}}, .output_tensors = {1, (const int32_t[1]){19}} }, /* conv2d_16 */
    {.id = 17, .type = AI_LAYER_PAD_TYPE, .input_tensors = {1, (const int32_t[1]){19}}, .output_tensors = {1, (const int32_t[1]){20}} }, /* conv2d_17_pad_before */
    {.id = 17, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){20}}, .output_tensors = {1, (const int32_t[1]){21}} }, /* conv2d_17 */
    {.id = 18, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){21}}, .output_tensors = {1, (const int32_t[1]){22}} }, /* conv2d_18 */
    {.id = 19, .type = AI_LAYER_ELTWISE_INTEGER_TYPE, .input_tensors = {2, (const int32_t[2]){18, 22}}, .output_tensors = {1, (const int32_t[1]){23}} }, /* eltwise_19 */
    {.id = 20, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){23}}, .output_tensors = {1, (const int32_t[1]){24}} }, /* conv2d_20 */
    {.id = 21, .type = AI_LAYER_PAD_TYPE, .input_tensors = {1, (const int32_t[1]){24}}, .output_tensors = {1, (const int32_t[1]){25}} }, /* conv2d_21_pad_before */
    {.id = 21, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){25}}, .output_tensors = {1, (const int32_t[1]){26}} }, /* conv2d_21 */
    {.id = 22, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){26}}, .output_tensors = {1, (const int32_t[1]){27}} }, /* conv2d_22 */
    {.id = 23, .type = AI_LAYER_ELTWISE_INTEGER_TYPE, .input_tensors = {2, (const int32_t[2]){23, 27}}, .output_tensors = {1, (const int32_t[1]){28}} }, /* eltwise_23 */
    {.id = 24, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){28}}, .output_tensors = {1, (const int32_t[1]){29}} }, /* conv2d_24 */
    {.id = 25, .type = AI_LAYER_PAD_TYPE, .input_tensors = {1, (const int32_t[1]){29}}, .output_tensors = {1, (const int32_t[1]){30}} }, /* conv2d_26_pad_before */
    {.id = 26, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){30}}, .output_tensors = {1, (const int32_t[1]){31}} }, /* conv2d_26 */
    {.id = 27, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){31}}, .output_tensors = {1, (const int32_t[1]){32}} }, /* conv2d_27 */
    {.id = 28, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){32}}, .output_tensors = {1, (const int32_t[1]){33}} }, /* conv2d_28 */
    {.id = 29, .type = AI_LAYER_PAD_TYPE, .input_tensors = {1, (const int32_t[1]){33}}, .output_tensors = {1, (const int32_t[1]){34}} }, /* conv2d_29_pad_before */
    {.id = 29, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){34}}, .output_tensors = {1, (const int32_t[1]){35}} }, /* conv2d_29 */
    {.id = 30, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){35}}, .output_tensors = {1, (const int32_t[1]){36}} }, /* conv2d_30 */
    {.id = 31, .type = AI_LAYER_ELTWISE_INTEGER_TYPE, .input_tensors = {2, (const int32_t[2]){32, 36}}, .output_tensors = {1, (const int32_t[1]){37}} }, /* eltwise_31 */
    {.id = 32, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){37}}, .output_tensors = {1, (const int32_t[1]){38}} }, /* conv2d_32 */
    {.id = 33, .type = AI_LAYER_PAD_TYPE, .input_tensors = {1, (const int32_t[1]){38}}, .output_tensors = {1, (const int32_t[1]){39}} }, /* conv2d_33_pad_before */
    {.id = 33, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){39}}, .output_tensors = {1, (const int32_t[1]){40}} }, /* conv2d_33 */
    {.id = 34, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){40}}, .output_tensors = {1, (const int32_t[1]){41}} }, /* conv2d_34 */
    {.id = 35, .type = AI_LAYER_ELTWISE_INTEGER_TYPE, .input_tensors = {2, (const int32_t[2]){37, 41}}, .output_tensors = {1, (const int32_t[1]){42}} }, /* eltwise_35 */
    {.id = 36, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){42}}, .output_tensors = {1, (const int32_t[1]){43}} }, /* conv2d_36 */
    {.id = 37, .type = AI_LAYER_PAD_TYPE, .input_tensors = {1, (const int32_t[1]){43}}, .output_tensors = {1, (const int32_t[1]){44}} }, /* conv2d_37_pad_before */
    {.id = 37, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){44}}, .output_tensors = {1, (const int32_t[1]){45}} }, /* conv2d_37 */
    {.id = 38, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){45}}, .output_tensors = {1, (const int32_t[1]){46}} }, /* conv2d_38 */
    {.id = 39, .type = AI_LAYER_ELTWISE_INTEGER_TYPE, .input_tensors = {2, (const int32_t[2]){42, 46}}, .output_tensors = {1, (const int32_t[1]){47}} }, /* eltwise_39 */
    {.id = 40, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){47}}, .output_tensors = {1, (const int32_t[1]){48}} }, /* conv2d_40 */
    {.id = 41, .type = AI_LAYER_PAD_TYPE, .input_tensors = {1, (const int32_t[1]){48}}, .output_tensors = {1, (const int32_t[1]){49}} }, /* conv2d_41_pad_before */
    {.id = 41, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){49}}, .output_tensors = {1, (const int32_t[1]){50}} }, /* conv2d_41 */
    {.id = 42, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){50}}, .output_tensors = {1, (const int32_t[1]){51}} }, /* conv2d_42 */
    {.id = 43, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){51}}, .output_tensors = {1, (const int32_t[1]){52}} }, /* conv2d_43 */
    {.id = 44, .type = AI_LAYER_PAD_TYPE, .input_tensors = {1, (const int32_t[1]){52}}, .output_tensors = {1, (const int32_t[1]){53}} }, /* conv2d_44_pad_before */
    {.id = 44, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){53}}, .output_tensors = {1, (const int32_t[1]){54}} }, /* conv2d_44 */
    {.id = 45, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){54}}, .output_tensors = {1, (const int32_t[1]){55}} }, /* conv2d_45 */
    {.id = 46, .type = AI_LAYER_ELTWISE_INTEGER_TYPE, .input_tensors = {2, (const int32_t[2]){51, 55}}, .output_tensors = {1, (const int32_t[1]){56}} }, /* eltwise_46 */
    {.id = 47, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){56}}, .output_tensors = {1, (const int32_t[1]){57}} }, /* conv2d_47 */
    {.id = 48, .type = AI_LAYER_PAD_TYPE, .input_tensors = {1, (const int32_t[1]){57}}, .output_tensors = {1, (const int32_t[1]){58}} }, /* conv2d_48_pad_before */
    {.id = 48, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){58}}, .output_tensors = {1, (const int32_t[1]){59}} }, /* conv2d_48 */
    {.id = 49, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){59}}, .output_tensors = {1, (const int32_t[1]){60}} }, /* conv2d_49 */
    {.id = 50, .type = AI_LAYER_ELTWISE_INTEGER_TYPE, .input_tensors = {2, (const int32_t[2]){56, 60}}, .output_tensors = {1, (const int32_t[1]){61}} }, /* eltwise_50 */
    {.id = 51, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){61}}, .output_tensors = {1, (const int32_t[1]){62}} }, /* conv2d_51 */
    {.id = 52, .type = AI_LAYER_PAD_TYPE, .input_tensors = {1, (const int32_t[1]){62}}, .output_tensors = {1, (const int32_t[1]){63}} }, /* conv2d_53_pad_before */
    {.id = 53, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){63}}, .output_tensors = {1, (const int32_t[1]){64}} }, /* conv2d_53 */
    {.id = 54, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){64}}, .output_tensors = {1, (const int32_t[1]){65}} }, /* conv2d_54 */
    {.id = 55, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){65}}, .output_tensors = {1, (const int32_t[1]){66}} }, /* conv2d_55 */
    {.id = 56, .type = AI_LAYER_PAD_TYPE, .input_tensors = {1, (const int32_t[1]){66}}, .output_tensors = {1, (const int32_t[1]){67}} }, /* conv2d_56_pad_before */
    {.id = 56, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){67}}, .output_tensors = {1, (const int32_t[1]){68}} }, /* conv2d_56 */
    {.id = 57, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){68}}, .output_tensors = {1, (const int32_t[1]){69}} }, /* conv2d_57 */
    {.id = 58, .type = AI_LAYER_ELTWISE_INTEGER_TYPE, .input_tensors = {2, (const int32_t[2]){65, 69}}, .output_tensors = {1, (const int32_t[1]){70}} }, /* eltwise_58 */
    {.id = 59, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){70}}, .output_tensors = {1, (const int32_t[1]){71}} }, /* conv2d_59 */
    {.id = 60, .type = AI_LAYER_PAD_TYPE, .input_tensors = {1, (const int32_t[1]){71}}, .output_tensors = {1, (const int32_t[1]){72}} }, /* conv2d_60_pad_before */
    {.id = 60, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){72}}, .output_tensors = {1, (const int32_t[1]){73}} }, /* conv2d_60 */
    {.id = 61, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){73}}, .output_tensors = {1, (const int32_t[1]){74}} }, /* conv2d_61 */
    {.id = 62, .type = AI_LAYER_ELTWISE_INTEGER_TYPE, .input_tensors = {2, (const int32_t[2]){70, 74}}, .output_tensors = {1, (const int32_t[1]){75}} }, /* eltwise_62 */
    {.id = 63, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){75}}, .output_tensors = {1, (const int32_t[1]){76}} }, /* conv2d_63 */
    {.id = 64, .type = AI_LAYER_PAD_TYPE, .input_tensors = {1, (const int32_t[1]){76}}, .output_tensors = {1, (const int32_t[1]){77}} }, /* conv2d_64_pad_before */
    {.id = 64, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){77}}, .output_tensors = {1, (const int32_t[1]){78}} }, /* conv2d_64 */
    {.id = 65, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){78}}, .output_tensors = {1, (const int32_t[1]){79}} }, /* conv2d_65 */
    {.id = 66, .type = AI_LAYER_CONV2D_TYPE, .input_tensors = {1, (const int32_t[1]){79}}, .output_tensors = {1, (const int32_t[1]){80}} }, /* conv2d_66 */
    {.id = 67, .type = AI_LAYER_POOL_TYPE, .input_tensors = {1, (const int32_t[1]){80}}, .output_tensors = {1, (const int32_t[1]){81}} }, /* pool_67 */
    {.id = 68, .type = AI_LAYER_DENSE_TYPE, .input_tensors = {1, (const int32_t[1]){81}}, .output_tensors = {1, (const int32_t[1]){82}} }, /* gemm_68 */
    {.id = 69, .type = AI_LAYER_SM_TYPE, .input_tensors = {1, (const int32_t[1]){82}}, .output_tensors = {1, (const int32_t[1]){83}} }, /* nl_69 */
    {.id = 70, .type = AI_LAYER_NL_TYPE, .input_tensors = {1, (const int32_t[1]){83}}, .output_tensors = {1, (const int32_t[1]){84}} } /* conversion_70 */
  },
  .n_nodes = 84
};
#endif


//
//  onnxConverter.hpp
//  MNNConverter
//
//  Created by MNN on 2019/01/31.
//  Copyright © 2018, Alibaba Group Holding Limited
//

#ifndef ONNXCONVERTER_HPP
#define ONNXCONVERTER_HPP

#include "MNN_generated.h"
#include "convertDef.h"

/**
 * @brief convert ONNX model to MNN model
 * @param inputModel ONNX model name(xxx.onnx)
 * @param bizCode(not used, always is MNN)
 * @param MNN net
 */
MNNConvertDeps_PUBLIC int onnx2MNNNet(const std::string inputModel, const std::string bizCode, std::unique_ptr<MNN::NetT>& netT);

#endif // ONNXCONVERTER_HPP

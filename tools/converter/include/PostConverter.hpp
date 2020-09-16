//
//  PostConverter.hpp
//  MNNConverter
//
//  Created by MNN on 2019/01/31.
//  Copyright © 2018, Alibaba Group Holding Limited
//

#ifndef OPTIMIZER_HPP
#define OPTIMIZER_HPP

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include "MNN_generated.h"
#include "flatbuffers/idl.h"
#include "flatbuffers/minireflect.h"
#include "flatbuffers/util.h"

#include "MNN_generated.h"
#include "convertDef.h"

/**
 *@brief optimize MNN net
 */
MNNConvertDeps_PUBLIC std::unique_ptr<MNN::NetT> optimizeNet(std::unique_ptr<MNN::NetT>& netT, bool forTraining);

#endif // OPTIMIZER_HPP

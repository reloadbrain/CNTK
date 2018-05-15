//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.md file in the project root for full license information.
//

#pragma once

namespace CNTK
{
    enum class PrimitiveOpType : unsigned int
    {
        Negate = 0,
        Sigmoid = 1,
        Tanh = 2,
        ReLU = 3,
        Exp = 4,
        Log = 5,
        Sqrt = 6,
        Floor = 7,
        Abs = 8,
        Reciprocal = 9,
        Softmax = 10,
        Hardmax = 11,
        TransposeAxes = 12,
        Where = 13,
        Slice = 14,
        Dropout = 15,
        Reshape = 16,
        Pooling = 17,
        SumAll = 18,
        Plus = 19,
        Minus = 20,
        ElementTimes = 21,
        Equal = 22,
        NotEqual = 23,
        Less = 24,
        LessEqual = 25,
        Greater = 26,
        GreaterEqual = 27,
        PackedIndex = 28,
        GatherPacked = 29,
        ScatterPacked = 30,
        Times = 31,
        TransposeTimes = 32,
        Convolution = 33,
        SquaredError = 34,
        CrossEntropyWithSoftmax = 35,
        ClassificationError = 36,
        PastValue = 37,
        FutureValue = 38,
        ReduceElements = 39,
        BatchNormalization = 40,
        Clip = 41,
        Select = 42,
        Splice = 43,
        Combine = 44,
        RandomSample = 45,
        RandomSampleInclusionFrequency = 46,
        ROIPooling = 47,
        Logistic = 48,
        OptimizedRNNStack = 49,
        ReconcileDynamicAxis = 50,
        LogSoftmax = 51,
        LogPlus = 52,
        CosDistance = 53,
        Sin = 54,
        Cos = 55,
        Pass = 56,
        Block = 57,
        Unpooling = 58,
        LambdaRank = 59,
        NDCG = 60,
        EditDistanceError = 61,
        NoOp = 62,
        LabelsToGraph = 63,
        StopGradient = 64,
        ELU = 65,
        ForwardBackward = 66,
        CosDistanceWithNegativeSamples = 67,
        OneHot = 68,
        Pow = 69,
        ToSequence = 70,
        ToSequenceLike = 71,
        UnpackSequence = 72,
        Assign = 73,
        Gather = 74,
        StableSigmoid = 75,
        RandomDistribution = 76,
        Sinh = 77,
        Cosh = 78,
        UnpackBatch = 79,
        ToBatch = 80,
        Asin = 81,
        Acos = 82,
        Pad = 83,
        Crop = 84,
        Atanh = 85,
        Asinh = 86,
        TopK = 87,
        Squeeze = 88,
        ConstantOp = 89,
        LatticeSequenceWithSoftmax = 90,
        Cast = 91,
        EyeLikeOp = 92,
        QuantizedProxyTimes = 93,

        // New op types should only be appended to the end of this list 
        UnknownOP
        // and UnknownOP should always be last.
        // If you append here, also add checks in SerializationTests (CheckEnumValuesNotModified)
        // and bump up PrimitiveFunction::s_serializationVersion
    };
}

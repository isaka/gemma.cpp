// Copyright 2024 Google LLC
// SPDX-License-Identifier: Apache-2.0
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef THIRD_PARTY_GEMMA_CPP_GEMMA_OPTIMIZER_H_
#define THIRD_PARTY_GEMMA_CPP_GEMMA_OPTIMIZER_H_

#include "gemma/common.h"
#include "hwy/contrib/thread_pool/thread_pool.h"

namespace gcpp {

void UpdateWeights(Model model, const ByteStorageT& grad, float scale,
                   ByteStorageT& weights, hwy::ThreadPool& pool);

}  // namespace gcpp

#endif  // THIRD_PARTY_GEMMA_CPP_GEMMA_OPTIMIZER_H_

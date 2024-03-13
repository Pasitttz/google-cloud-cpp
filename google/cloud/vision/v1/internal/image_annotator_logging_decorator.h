// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/vision/v1/image_annotator.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_V1_INTERNAL_IMAGE_ANNOTATOR_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_V1_INTERNAL_IMAGE_ANNOTATOR_LOGGING_DECORATOR_H

#include "google/cloud/vision/v1/internal/image_annotator_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace vision_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ImageAnnotatorLogging : public ImageAnnotatorStub {
 public:
  ~ImageAnnotatorLogging() override = default;
  ImageAnnotatorLogging(std::shared_ptr<ImageAnnotatorStub> child,
                        TracingOptions tracing_options,
                        std::set<std::string> const& components);

  StatusOr<google::cloud::vision::v1::BatchAnnotateImagesResponse>
  BatchAnnotateImages(
      grpc::ClientContext& context, Options const& options,
      google::cloud::vision::v1::BatchAnnotateImagesRequest const& request)
      override;

  StatusOr<google::cloud::vision::v1::BatchAnnotateFilesResponse>
  BatchAnnotateFiles(grpc::ClientContext& context, Options const& options,
                     google::cloud::vision::v1::BatchAnnotateFilesRequest const&
                         request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncAsyncBatchAnnotateImages(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vision::v1::AsyncBatchAnnotateImagesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncAsyncBatchAnnotateFiles(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vision::v1::AsyncBatchAnnotateFilesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<ImageAnnotatorStub> child_;
  TracingOptions tracing_options_;
};  // ImageAnnotatorLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_V1_INTERNAL_IMAGE_ANNOTATOR_LOGGING_DECORATOR_H

// Copyright 2023 Google LLC
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
// source: google/cloud/timeseriesinsights/v1/timeseries_insights.proto

#include "google/cloud/timeseriesinsights/v1/internal/timeseries_insights_controller_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/timeseriesinsights/v1/timeseries_insights.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace timeseriesinsights_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TimeseriesInsightsControllerLogging::TimeseriesInsightsControllerLogging(
    std::shared_ptr<TimeseriesInsightsControllerStub> child,
    TracingOptions tracing_options, std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::timeseriesinsights::v1::ListDataSetsResponse>
TimeseriesInsightsControllerLogging::ListDataSets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::timeseriesinsights::v1::ListDataSetsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::timeseriesinsights::v1::ListDataSetsRequest const&
                 request) {
        return child_->ListDataSets(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::timeseriesinsights::v1::DataSet>
TimeseriesInsightsControllerLogging::CreateDataSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::timeseriesinsights::v1::CreateDataSetRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::timeseriesinsights::v1::CreateDataSetRequest const&
                 request) {
        return child_->CreateDataSet(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status TimeseriesInsightsControllerLogging::DeleteDataSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::timeseriesinsights::v1::DeleteDataSetRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::timeseriesinsights::v1::DeleteDataSetRequest const&
                 request) {
        return child_->DeleteDataSet(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::timeseriesinsights::v1::AppendEventsResponse>
TimeseriesInsightsControllerLogging::AppendEvents(
    grpc::ClientContext& context, Options const& options,
    google::cloud::timeseriesinsights::v1::AppendEventsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::timeseriesinsights::v1::AppendEventsRequest const&
                 request) {
        return child_->AppendEvents(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::timeseriesinsights::v1::QueryDataSetResponse>
TimeseriesInsightsControllerLogging::QueryDataSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::timeseriesinsights::v1::QueryDataSetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::timeseriesinsights::v1::QueryDataSetRequest const&
                 request) {
        return child_->QueryDataSet(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::timeseriesinsights::v1::EvaluatedSlice>
TimeseriesInsightsControllerLogging::EvaluateSlice(
    grpc::ClientContext& context, Options const& options,
    google::cloud::timeseriesinsights::v1::EvaluateSliceRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::timeseriesinsights::v1::EvaluateSliceRequest const&
                 request) {
        return child_->EvaluateSlice(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::timeseriesinsights::v1::EvaluatedSlice>
TimeseriesInsightsControllerLogging::EvaluateTimeseries(
    grpc::ClientContext& context, Options const& options,
    google::cloud::timeseriesinsights::v1::EvaluateTimeseriesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::timeseriesinsights::v1::
                 EvaluateTimeseriesRequest const& request) {
        return child_->EvaluateTimeseries(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace timeseriesinsights_v1_internal
}  // namespace cloud
}  // namespace google

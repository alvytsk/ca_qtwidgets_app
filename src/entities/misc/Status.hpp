#pragma once

#include <string>

enum class Status
{
  Undefined,
  Normal,
  Failure,
  NonFatalFailure
};

std::string statusToString(Status status)
{
  switch (status)
  {
  default:
    return "Unknown status";
  case Status::Undefined:
    return "Undefined";
  case Status::Normal:
    return "Normal";
  case Status::Failure:
    return "Failure";
  case Status::NonFatalFailure:
    return "NonFatalFailure";
  }
}
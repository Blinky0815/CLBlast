
// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. It
// is auto-generated by the 'scripts/database/database.py' Python script.
//
// This file populates the database with best-found tuning parameters for the 'Xger16' kernels.
//
// =================================================================================================

namespace clblast {
namespace database {

const DatabaseEntry XgerHalf = {
  "Xger", Precision::kHalf, {"WGS1", "WGS2", "WPT"}, {
    { // AMD GPUs
      kDeviceTypeGPU, "AMD", {
        { "Ellesmere",                                       { 64, 1, 2 } },
        { "default",                                         { 64, 1, 2 } },
      }
    },
    { // Intel GPUs
      kDeviceTypeGPU, "Intel", {
        { "Intel(R) HD Graphics 5500 BroadWell U-Processor GT2", { 256, 1, 2 } },
        { "Intel(R) HD Graphics Skylake ULT GT2",            { 64, 1, 4 } },
        { "default",                                         { 4, 8, 2 } },
      }
    },
    { // QUALCOMM GPUs
      kDeviceTypeGPU, "QUALCOMM", {
        { "QUALCOMM Adreno(TM)",                             { 64, 4, 2 } },
        { "default",                                         { 64, 4, 2 } },
      }
    },
    { // Default
      kDeviceTypeAll, "default", {
        { "default",                                         { 64, 1, 2 } },
      }
    },
  }
};

} // namespace database
} // namespace clblast

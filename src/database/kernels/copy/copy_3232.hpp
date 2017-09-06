
// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. It
// is auto-generated by the 'scripts/database/database.py' Python script.
//
// This file populates the database with best-found tuning parameters for the 'Copy3232' kernels.
//
// =================================================================================================

namespace clblast {
namespace database {

const DatabaseEntry CopyComplexSingle = {
  "Copy", Precision::kComplexSingle, {"COPY_DIMX", "COPY_DIMY", "COPY_VW", "COPY_WPT"}, {
    { // AMD GPUs
      kDeviceTypeGPU, "AMD", {
        { "AMD Radeon R9 M370X Compute Engine",              { 32, 8, 1, 1 } },
        { "ATI Radeon HD 6750M",                             { 8, 8, 1, 1 } },
        { "Ellesmere",                                       { 16, 16, 1, 4 } },
        { "Fiji",                                            { 16, 8, 1, 2 } },
        { "Hawaii",                                          { 32, 8, 1, 2 } },
        { "Oland",                                           { 8, 16, 1, 1 } },
        { "Pitcairn",                                        { 8, 8, 1, 2 } },
        { "Tahiti",                                          { 8, 8, 2, 2 } },
        { "Tonga",                                           { 8, 32, 1, 2 } },
        { "Turks",                                           { 32, 8, 4, 1 } },
        { "default",                                         { 16, 8, 1, 1 } },
      }
    },
    { // Intel CPUs
      kDeviceTypeCPU, "Intel", {
        { "Intel(R) Core(TM) i7-2670QM CPU @ 2.20GHz",       { 32, 16, 4, 2 } },
        { "Intel(R) Core(TM) i5-6200U CPU @ 2.30GHz",        { 16, 16, 8, 1 } },
        { "Intel(R) Core(TM) i7 CPU         920  @ 2.67GHz", { 32, 8, 4, 2 } },
        { "Intel(R) Core(TM) i7-3770 CPU @ 3.40GHz",         { 32, 8, 2, 2 } },
        { "Intel(R) Core(TM) i7-4790K CPU @ 4.00GHz",        { 32, 32, 4, 1 } },
        { "Intel(R) Core(TM) i7-5930K CPU @ 3.50GHz",        { 16, 8, 8, 1 } },
        { "default",                                         { 32, 8, 8, 1 } },
      }
    },
    { // Intel GPUs
      kDeviceTypeGPU, "Intel", {
        { "Intel(R) HD Graphics 530",                        { 16, 8, 2, 1 } },
        { "Intel(R) HD Graphics 5500 BroadWell U-Processor GT2", { 16, 16, 2, 2 } },
        { "Intel(R) HD Graphics Haswell Ultrabook GT2 Mobile", { 8, 8, 1, 1 } },
        { "Intel(R) HD Graphics IvyBridge M GT2",            { 8, 32, 2, 4 } },
        { "Intel(R) HD Graphics Skylake ULT GT2",            { 8, 8, 2, 1 } },
        { "Iris",                                            { 16, 8, 1, 2 } },
        { "Iris Pro",                                        { 32, 16, 1, 4 } },
        { "default",                                         { 16, 8, 1, 2 } },
      }
    },
    { // Intel accelerators
      kDeviceTypeAccelerator, "Intel", {
        { "Intel(R) Many Integrated Core Acceleration Card", { 32, 8, 4, 1 } },
        { "default",                                         { 32, 8, 4, 1 } },
      }
    },
    { // NVIDIA GPUs
      kDeviceTypeGPU, "NVIDIA", {
        { "GRID K520",                                       { 16, 8, 1, 1 } },
        { "GeForce GTX 1070",                                { 16, 8, 1, 1 } },
        { "GeForce GTX 1080",                                { 32, 8, 1, 2 } },
        { "GeForce GTX 480",                                 { 16, 16, 1, 1 } },
        { "GeForce GTX 670",                                 { 16, 8, 1, 1 } },
        { "GeForce GTX 750",                                 { 16, 8, 1, 2 } },
        { "GeForce GTX 750 Ti",                              { 16, 32, 1, 1 } },
        { "GeForce GTX 980",                                 { 8, 8, 1, 1 } },
        { "GeForce GTX TITAN Black",                         { 16, 8, 1, 1 } },
        { "GeForce GTX TITAN X",                             { 16, 8, 1, 1 } },
        { "TITAN X (Pascal)",                                { 8, 16, 2, 1 } },
        { "Tesla K20m",                                      { 8, 8, 1, 4 } },
        { "Tesla K40m",                                      { 16, 8, 1, 1 } },
        { "default",                                         { 32, 8, 1, 1 } },
      }
    },
    { // QUALCOMM GPUs
      kDeviceTypeGPU, "QUALCOMM", {
        { "QUALCOMM Adreno(TM)",                             { 32, 8, 1, 1 } },
        { "default",                                         { 32, 8, 1, 1 } },
      }
    },
    { // Default
      kDeviceTypeAll, "default", {
        { "default",                                         { 16, 8, 1, 2 } },
      }
    },
  }
};

} // namespace database
} // namespace clblast

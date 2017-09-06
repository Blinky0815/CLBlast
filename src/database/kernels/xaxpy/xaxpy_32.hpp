
// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. It
// is auto-generated by the 'scripts/database/database.py' Python script.
//
// This file populates the database with best-found tuning parameters for the 'Xaxpy32' kernels.
//
// =================================================================================================

namespace clblast {
namespace database {

const DatabaseEntry XaxpySingle = {
  "Xaxpy", Precision::kSingle, {"VW", "WGS", "WPT"}, {
    { // AMD GPUs
      kDeviceTypeGPU, "AMD", {
        { "AMD Radeon R9 M370X Compute Engine",              { 1, 128, 1 } },
        { "ATI Radeon HD 6750M",                             { 1, 256, 2 } },
        { "Ellesmere",                                       { 1, 64, 4 } },
        { "Fiji",                                            { 4, 64, 1 } },
        { "Hawaii",                                          { 2, 64, 2 } },
        { "Oland",                                           { 1, 128, 1 } },
        { "Pitcairn",                                        { 2, 128, 1 } },
        { "Tahiti",                                          { 2, 64, 1 } },
        { "Tonga",                                           { 1, 256, 8 } },
        { "Turks",                                           { 2, 256, 1 } },
        { "default",                                         { 2, 256, 1 } },
      }
    },
    { // ARM GPUs
      kDeviceTypeGPU, "ARM", {
        { "Mali-T628",                                       { 4, 256, 1 } },
        { "default",                                         { 4, 256, 1 } },
      }
    },
    { // Intel CPUs
      kDeviceTypeCPU, "Intel", {
        { "Intel(R) Core(TM) i7-2670QM CPU @ 2.20GHz",       { 8, 512, 1 } },
        { "Intel(R) Core(TM) i5-6200U CPU @ 2.30GHz",        { 1, 512, 1 } },
        { "Intel(R) Core(TM) i7 CPU         920  @ 2.67GHz", { 1, 128, 2 } },
        { "Intel(R) Core(TM) i7-3770 CPU @ 3.40GHz",         { 4, 256, 1 } },
        { "Intel(R) Core(TM) i7-4790K CPU @ 4.00GHz",        { 2, 1024, 1 } },
        { "Intel(R) Core(TM) i7-5930K CPU @ 3.50GHz",        { 1, 128, 1 } },
        { "default",                                         { 8, 512, 1 } },
      }
    },
    { // Intel GPUs
      kDeviceTypeGPU, "Intel", {
        { "Intel(R) HD Graphics 530",                        { 1, 128, 1 } },
        { "Intel(R) HD Graphics 5500 BroadWell U-Processor GT2", { 1, 256, 1 } },
        { "Intel(R) HD Graphics Haswell Ultrabook GT2 Mobile", { 1, 64, 1 } },
        { "Intel(R) HD Graphics IvyBridge M GT2",            { 1, 64, 1 } },
        { "Intel(R) HD Graphics Skylake ULT GT2",            { 8, 512, 1 } },
        { "Iris",                                            { 1, 64, 1 } },
        { "Iris Pro",                                        { 1, 128, 2 } },
        { "default",                                         { 4, 256, 1 } },
      }
    },
    { // Intel accelerators
      kDeviceTypeAccelerator, "Intel", {
        { "Intel(R) Many Integrated Core Acceleration Card", { 2, 1024, 2 } },
        { "default",                                         { 2, 1024, 2 } },
      }
    },
    { // NVIDIA GPUs
      kDeviceTypeGPU, "NVIDIA", {
        { "GRID K520",                                       { 2, 64, 1 } },
        { "GeForce GT 650M",                                 { 2, 1024, 1 } },
        { "GeForce GTX 1070",                                { 1, 64, 4 } },
        { "GeForce GTX 1080",                                { 1, 256, 1 } },
        { "GeForce GTX 480",                                 { 2, 128, 1 } },
        { "GeForce GTX 670",                                 { 2, 64, 1 } },
        { "GeForce GTX 680",                                 { 1, 128, 1 } },
        { "GeForce GTX 750",                                 { 1, 64, 1 } },
        { "GeForce GTX 750 Ti",                              { 2, 64, 1 } },
        { "GeForce GTX 980",                                 { 1, 1024, 1 } },
        { "GeForce GTX TITAN",                               { 4, 256, 1 } },
        { "GeForce GTX TITAN Black",                         { 4, 128, 4 } },
        { "GeForce GTX TITAN X",                             { 1, 64, 1 } },
        { "TITAN X (Pascal)",                                { 4, 128, 1 } },
        { "Tesla K20m",                                      { 4, 128, 1 } },
        { "Tesla K40m",                                      { 4, 128, 1 } },
        { "default",                                         { 4, 1024, 1 } },
      }
    },
    { // QUALCOMM GPUs
      kDeviceTypeGPU, "QUALCOMM", {
        { "QUALCOMM Adreno(TM)",                             { 4, 128, 2 } },
        { "default",                                         { 4, 128, 2 } },
      }
    },
    { // Default
      kDeviceTypeAll, "default", {
        { "default",                                         { 4, 64, 1 } },
      }
    },
  }
};

} // namespace database
} // namespace clblast


// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. It
// is auto-generated by the 'scripts/database/database.py' Python script.
//
// This file populates the database with best-found tuning parameters for the 'Padtranspose6464' kernels.
//
// =================================================================================================

namespace clblast {
namespace database {

const DatabaseEntry PadtransposeComplexDouble = {
  "Padtranspose", Precision::kComplexDouble, {"PADTRA_PAD", "PADTRA_TILE", "PADTRA_WPT"}, {
    { // AMD GPUs
      kDeviceTypeGPU, "AMD", {
        { "AMD Radeon R9 M370X Compute Engine",              { 0, 8, 4 } },
        { "Ellesmere",                                       { 0, 8, 4 } },
        { "Fiji",                                            { 0, 8, 2 } },
        { "Hawaii",                                          { 0, 8, 4 } },
        { "Oland",                                           { 0, 8, 4 } },
        { "Pitcairn",                                        { 0, 8, 4 } },
        { "Tahiti",                                          { 0, 8, 2 } },
        { "Tonga",                                           { 0, 8, 2 } },
        { "default",                                         { 0, 8, 4 } },
      }
    },
    { // ARM GPUs
      kDeviceTypeGPU, "ARM", {
        { "Mali-T628",                                       { 0, 8, 1 } },
        { "default",                                         { 0, 8, 1 } },
      }
    },
    { // Intel CPUs
      kDeviceTypeCPU, "Intel", {
        { "Intel(R) Core(TM) i7-2670QM CPU @ 2.20GHz",       { 0, 8, 4 } },
        { "Intel(R) Core(TM) i5-6200U CPU @ 2.30GHz",        { 1, 8, 2 } },
        { "Intel(R) Core(TM) i7 CPU         920  @ 2.67GHz", { 1, 16, 2 } },
        { "Intel(R) Core(TM) i7-3770 CPU @ 3.40GHz",         { 1, 8, 4 } },
        { "Intel(R) Core(TM) i7-4790K CPU @ 4.00GHz",        { 0, 8, 4 } },
        { "Intel(R) Core(TM) i7-5930K CPU @ 3.50GHz",        { 1, 8, 4 } },
        { "default",                                         { 0, 8, 4 } },
      }
    },
    { // Intel accelerators
      kDeviceTypeAccelerator, "Intel", {
        { "Intel(R) Many Integrated Core Acceleration Card", { 0, 16, 1 } },
        { "default",                                         { 0, 16, 1 } },
      }
    },
    { // NVIDIA GPUs
      kDeviceTypeGPU, "NVIDIA", {
        { "GRID K520",                                       { 1, 16, 1 } },
        { "GeForce GTX 1070",                                { 1, 16, 1 } },
        { "GeForce GTX 1080",                                { 1, 8, 1 } },
        { "GeForce GTX 480",                                 { 1, 16, 1 } },
        { "GeForce GTX 670",                                 { 1, 16, 1 } },
        { "GeForce GTX 680",                                 { 1, 32, 1 } },
        { "GeForce GTX 750",                                 { 1, 16, 1 } },
        { "GeForce GTX 750 Ti",                              { 1, 8, 2 } },
        { "GeForce GTX 980",                                 { 0, 16, 1 } },
        { "GeForce GTX TITAN",                               { 1, 16, 1 } },
        { "GeForce GTX TITAN Black",                         { 0, 16, 1 } },
        { "GeForce GTX TITAN X",                             { 1, 32, 1 } },
        { "TITAN X (Pascal)",                                { 1, 8, 1 } },
        { "Tesla K20m",                                      { 1, 16, 1 } },
        { "Tesla K40m",                                      { 1, 16, 1 } },
        { "default",                                         { 1, 16, 1 } },
      }
    },
    { // Default
      kDeviceTypeAll, "default", {
        { "default",                                         { 0, 8, 2 } },
      }
    },
  }
};

} // namespace database
} // namespace clblast

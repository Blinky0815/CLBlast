
// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. It
// is auto-generated by the 'scripts/database/database.py' Python script.
//
// This file populates the database with best-found tuning parameters for the 'Xgemm64' kernels.
//
// =================================================================================================

namespace clblast {
namespace database {

const DatabaseEntry XgemmDouble = {
  "Xgemm", Precision::kDouble, {"KWG", "KWI", "MDIMA", "MDIMC", "MWG", "NDIMB", "NDIMC", "NWG", "SA", "SB", "STRM", "STRN", "VWM", "VWN"}, {
    { // AMD GPUs
      kDeviceTypeGPU, "AMD", {
        { "AMD Radeon R9 M370X Compute Engine",              { 32, 2, 16, 16, 64, 8, 8, 32, 0, 0, 0, 0, 4, 4 } },
        { "Ellesmere",                                       { 32, 2, 16, 16, 32, 16, 16, 64, 1, 1, 0, 0, 2, 2 } },
        { "Fiji",                                            { 32, 2, 16, 16, 32, 16, 16, 32, 1, 1, 0, 0, 2, 2 } },
        { "Hawaii",                                          { 16, 8, 32, 8, 128, 8, 8, 32, 0, 1, 0, 0, 1, 4 } },
        { "Oland",                                           { 16, 2, 8, 16, 64, 16, 8, 16, 0, 0, 1, 1, 1, 1 } },
        { "Pitcairn",                                        { 32, 2, 32, 16, 64, 8, 16, 32, 0, 0, 0, 0, 1, 2 } },
        { "Tahiti",                                          { 32, 2, 16, 8, 16, 8, 8, 32, 0, 0, 0, 1, 1, 4 } },
        { "Tonga",                                           { 32, 2, 16, 16, 32, 16, 16, 32, 1, 1, 0, 0, 2, 2 } },
        { "default",                                         { 32, 2, 16, 16, 32, 16, 16, 32, 1, 1, 0, 0, 2, 2 } },
      }
    },
    { // ARM GPUs
      kDeviceTypeGPU, "ARM", {
        { "Mali-T628",                                       { 32, 2, 8, 8, 64, 8, 8, 16, 0, 1, 1, 0, 8, 2 } },
        { "default",                                         { 32, 2, 8, 8, 64, 8, 8, 16, 0, 1, 1, 0, 8, 2 } },
      }
    },
    { // Intel CPUs
      kDeviceTypeCPU, "Intel", {
        { "Intel(R) Core(TM) i7-2670QM CPU @ 2.20GHz",       { 16, 2, 32, 8, 128, 16, 16, 128, 1, 1, 1, 1, 2, 8 } },
        { "Intel(R) Core(TM) i5-6200U CPU @ 2.30GHz",        { 32, 2, 32, 16, 128, 16, 16, 64, 0, 1, 1, 0, 1, 2 } },
        { "Intel(R) Core(TM) i7 CPU         920  @ 2.67GHz", { 32, 2, 32, 16, 128, 16, 16, 128, 0, 0, 1, 0, 1, 2 } },
        { "Intel(R) Core(TM) i7-3770 CPU @ 3.40GHz",         { 32, 2, 16, 8, 128, 8, 8, 64, 1, 0, 0, 1, 2, 8 } },
        { "Intel(R) Core(TM) i7-4790K CPU @ 4.00GHz",        { 32, 2, 16, 8, 128, 8, 8, 128, 1, 0, 0, 0, 2, 8 } },
        { "Intel(R) Core(TM) i7-5930K CPU @ 3.50GHz",        { 32, 2, 8, 16, 128, 16, 8, 128, 0, 0, 1, 1, 1, 8 } },
        { "default",                                         { 32, 2, 16, 16, 64, 8, 8, 64, 1, 1, 0, 0, 1, 4 } },
      }
    },
    { // Intel accelerators
      kDeviceTypeAccelerator, "Intel", {
        { "Intel(R) Many Integrated Core Acceleration Card", { 32, 8, 8, 16, 16, 16, 16, 128, 0, 0, 1, 0, 1, 4 } },
        { "default",                                         { 32, 8, 8, 16, 16, 16, 16, 128, 0, 0, 1, 0, 1, 4 } },
      }
    },
    { // NVIDIA GPUs
      kDeviceTypeGPU, "NVIDIA", {
        { "GRID K520",                                       { 16, 2, 8, 8, 16, 8, 8, 32, 1, 0, 0, 1, 2, 2 } },
        { "GeForce GTX 1070",                                { 16, 2, 8, 16, 32, 8, 8, 64, 0, 0, 1, 1, 2, 8 } },
        { "GeForce GTX 1080",                                { 32, 2, 16, 16, 32, 16, 16, 64, 0, 0, 0, 0, 2, 4 } },
        { "GeForce GTX 480",                                 { 16, 2, 8, 16, 32, 32, 8, 64, 1, 1, 1, 0, 1, 2 } },
        { "GeForce GTX 670",                                 { 32, 8, 16, 32, 128, 16, 8, 32, 0, 1, 1, 0, 1, 1 } },
        { "GeForce GTX 680",                                 { 32, 8, 8, 8, 32, 16, 32, 128, 1, 0, 0, 1, 2, 4 } },
        { "GeForce GTX 750",                                 { 32, 8, 16, 32, 64, 16, 8, 128, 0, 0, 0, 1, 2, 1 } },
        { "GeForce GTX 750 Ti",                              { 32, 2, 8, 8, 32, 16, 16, 32, 0, 0, 0, 0, 4, 2 } },
        { "GeForce GTX 980",                                 { 32, 8, 16, 8, 64, 32, 32, 128, 0, 0, 1, 0, 2, 4 } },
        { "GeForce GTX TITAN",                               { 16, 8, 16, 8, 32, 16, 32, 128, 1, 1, 1, 1, 2, 2 } },
        { "GeForce GTX TITAN Black",                         { 16, 2, 16, 8, 16, 16, 8, 16, 1, 1, 1, 0, 1, 1 } },
        { "GeForce GTX TITAN X",                             { 16, 8, 16, 16, 16, 16, 16, 16, 0, 0, 0, 0, 1, 1 } },
        { "TITAN X (Pascal)",                                { 32, 2, 32, 32, 32, 16, 16, 32, 0, 0, 0, 0, 1, 2 } },
        { "Tesla K20m",                                      { 16, 2, 32, 8, 32, 16, 16, 64, 1, 0, 0, 0, 1, 1 } },
        { "Tesla K40m",                                      { 32, 2, 16, 8, 64, 16, 32, 128, 1, 0, 1, 1, 2, 4 } },
        { "default",                                         { 32, 2, 16, 16, 32, 16, 16, 64, 0, 0, 0, 0, 2, 4 } },
      }
    },
    { // Default
      kDeviceTypeAll, "default", {
        { "default",                                         { 32, 2, 8, 8, 32, 8, 8, 64, 0, 0, 0, 0, 4, 4 } },
      }
    },
  }
};

} // namespace database
} // namespace clblast

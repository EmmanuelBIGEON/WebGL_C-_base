CALL env.bat

cmake^
  -G "MinGW Makefiles"^
  -DCMAKE_TOOLCHAIN_FILE=%TOOLCHAIN_FILE%^
  -B %BUILD_DIR%^
  -S %CMAKE_FILE_DIR%^
  -DCMAKE_INSTALL_PREFIX=%INSTALL_DIR%^
  -Wno-dev

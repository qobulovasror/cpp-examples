@echo off

set folders=1 2 3 4 5 6 7 8 9 10

for %%f in (%folders%) do (
  mkdir %%f
  echo #include <iostream> > %%f\index.cpp
  echo int main() { > %%f\index.cpp
  echo    std::cout << "Hello, World!" << std::endl; > %%f\index.cpp
  echo    return 0; > %%f\index.cpp
  echo } >> %%f\index.cpp
)
#include "TestTool.h"


namespace TestTool {
bool isNumeric(const std::string& str) {

  return std::stoi(str) != 0;
}
}  // namespace TestTool

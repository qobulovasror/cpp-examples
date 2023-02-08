const fs = require("fs");
const path = require("path");
for (let i = 1; i <= 100; i++) {
  fs.rmSync(`example-${i}`, { recursive: true });
}
for (let i = 1; i <= 100; i++) {
  const folderName = `example-${i}`;
  fs.mkdirSync(folderName);
  
  const fileName = path.join(folderName, "index.cpp");
  fs.writeFileSync(fileName, `#include <iostream>
using namespace std;
int main() {
    cout << "Hello, World!" << endl;

    return 0;
}
`);
}

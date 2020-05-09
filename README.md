

  "${workspaceFolder}/main.c",
                "${workspaceFolder}/imporve/testArray/testArray.c",
                "${workspaceFolder}/imporve/testVariables/testVariable.c",
                "${workspaceFolder}/imporve/testPointer/testPointer.c",
                "${workspaceFolder}/imporve/testChar/testChar.c",
                "${workspaceFolder}/imporve/testStruct/testStruct.c",
                "${workspaceFolder}/imporve/testUnion/testUnion.c",
                "${workspaceFolder}/imporve/testFile/testFile.c",
                "${workspaceFolder}/imporve/typedefTest/testTypedef.c",


{
    "files.associations": {
        "choosesort.h": "c",
        "testpointer.h": "c",
        "testconstant.h": "c",
        "testarray.h": "c",
        "stdlib.h": "c",
        "testchar.h": "c",
        "printf.h": "c",
        "string.h": "c",
        "__config": "cpp",
        "memory": "c",
        "testunion.h": "c",
        "testfile.h": "c",
        "stdio.h": "c",
        "testvariable.h": "c"
    },
    "C_Cpp.errorSquiggles": "Disabled"
}

{
    // Use IntelliSense to learn about possible attributes.
    // Hover to view descriptions of existing attributes.
    // For more information, visit: https://go.microsoft.com/fwlink/?linkid=830387
    "version": "0.2.0",
    "configurations": [
        
        {
            "name": "(lldb) Launch",
            "type": "cppdbg",
            "request": "launch",
            "program": "${workspaceFolder}/a.out",
            // "args": [],
            "args": [
                "-g",
                "${workspaceFolder}/main.c",
                "${workspaceFolder}/imporve/testArray/testArray.c",
                "${workspaceFolder}/imporve/testVariables/testVariable.c",
                "${workspaceFolder}/imporve/testPointer/testPointer.c",
                "-o",
                "${workspaceFolder}/a.out"
            ],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": true,
            "MIMode": "lldb"
        },
        { 
            "name": "(lldb) Attach",
            "type": "cppdbg",
            "request": "attach",
            "program": "${workspaceFolder}/a.out",
            "processId": "${command:pickProcess}",
            "MIMode": "lldb"
        },
        {
            "name": "clang build and debug active file",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}/${fileBasenameNoExtension}",
            // "program": "improve/testHelloWorld/testHelloWorld.c",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "lldb",
            "preLaunchTask": "clang build active file"
        }
    ]
}

## C++关键字
asm 
auto
bool
break
case 
catch
char
class
const
const_cast
continue
default
delete
do
double
dynamic_cast
else
enum
explicit
export
extern
false
float
for
friend
goto
if
inline
int
long
mutable
namespace
new
operator
private
protected
public
register
reinterpret_cast
return
short
signed
sizeof
static
static_cast
struct
switch
template
this
throw
true
try
typedef
typeid
typename
union
unsigned
using
virtual
void
volatile
wchat_t
while

## 基本数据类型
long 1 false true
char 1 -128-127
signedchar 1 -128-127
unsigned char 1 0-255
short 2 -32768-32767
unsined short 2 0-65536
int 4 
unsigned int
long 
unsigned long
float 
double 8
long double 8

## I/O格式控制
dec 数值采用十进制
hex  数值采用十六进制
oct  数值采用八进制
ws  提取空白符
endl  插入换行符，并刷新流
setsprecision(int) 设置浮点数的小数位数
setw(int) 设置域宽


"${workspaceFolder}/${fileBasenameNoExtension}"
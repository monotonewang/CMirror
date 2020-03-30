

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
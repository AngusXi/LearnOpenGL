#pragma once

const char* vertexShaderSource4 = "#version 330 core\n"
"layout(location = 0) in vec3 aPos;\n"   // 位置变量的属性位置值为 0 
"layout(location = 1) in vec3 aColor;\n" // 颜色变量的属性位置值为 1
"out vec3 ourColor;\n" // 向片段着色器输出一个颜色
"void main()\n"
"{\n"
"	gl_Position = vec4(aPos, 1.0);\n"
"	ourColor = aColor;\n" // 将ourColor设置为我们从顶点数据那里得到的输入颜色
"}\n";

const char* fragmentUniformShader4 = "#version 330 core\n"
"out vec4 FragColor;\n"
"in vec3 ourColor;\n"
"void main()\n"
"{\n"
"	FragColor = vec4(ourColor, 1.0);\n"
"}\n";


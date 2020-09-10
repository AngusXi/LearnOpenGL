#pragma once

const char* vertexShaderSource4 = "#version 330 core\n"
"layout(location = 0) in vec3 aPos;\n"   // λ�ñ���������λ��ֵΪ 0 
"layout(location = 1) in vec3 aColor;\n" // ��ɫ����������λ��ֵΪ 1
"out vec3 ourColor;\n" // ��Ƭ����ɫ�����һ����ɫ
"void main()\n"
"{\n"
"	gl_Position = vec4(aPos, 1.0);\n"
"	ourColor = aColor;\n" // ��ourColor����Ϊ���ǴӶ�����������õ���������ɫ
"}\n";

const char* fragmentUniformShader4 = "#version 330 core\n"
"out vec4 FragColor;\n"
"in vec3 ourColor;\n"
"void main()\n"
"{\n"
"	FragColor = vec4(ourColor, 1.0);\n"
"}\n";


#pragma once

#ifndef NCP_SHADER_H
#define NCP_SHADER_H
#include <glad/glad.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class NCPShader
{
public:
	unsigned int ID;

	NCPShader(const GLchar* vertexPath, const GLchar* fragmentPath);
	void use();
	void setBool(const std::string &name, bool value) const;
	void setInt(const std::string &name, int value) const;
	void setFloat(const std::string &name, float value) const;
	void setVecF4(const std::string &name, float x, float y, float z, float w);

private:
	void checkCompileErrors(unsigned int shader, std::string type);
};

#endif // !NCP_SHADER_H

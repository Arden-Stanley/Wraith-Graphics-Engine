#include "Shader.h"

namespace Wraith {
	ShaderProgram::ShaderProgram() : id_(0) {}

	void ShaderProgram::AttachShader(Shader shader) const {}

	void ShaderProgram::Compile();
	
	void SetActive() const {};

	VertexShader::VertexShader(const std::string& fileName) : id_(0) {}

	unsigned int GetCompiledShader() const {

	}
} // namespace Wraith

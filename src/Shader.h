#pragma once

#include <glad/glad.h>
#include <iostream>
#include <string>

namespace Wraith {
class ShaderProgram {
public:
  ShaderProgram();
  void AttachShader(Shader shader) const;
  void Compile();
  void SetActive() const;

private:
  unsigned int id_;
};

class Shader {
public:
  virtual unsigned int GetCompiledShader() const = 0;
};

class VertexShader : public Shader {
public:
  VertexShader(const std::string &fileName);
  virtual unsigned int GetCompiledShader() const override;

private:
  unsigned int id_;
};

class FragmentShader : public Shader {
public:
  FragmentShader(const std::string &fileName);
  virtual unsigned int GetCompiledShader() const override;

private:
  unsigned int id_;
};
} // namespace Wraith

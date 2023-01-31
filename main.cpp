#include <iostream>
#include <glm/glm.hpp>

using namespace std;

int main()
{
  //Varables
  int number = 0;  

  //Main Loop
  glm::vec4 Position = glm::vec4(glm::vec3(0.0), 1.0);
  glm::mat4 Model = glm::mat4(1.0);
  Model[4] = glm::vec4(1.0, 1.0, 0.0, 1.0);
  glm::vec4 Transformed = Model * Position;
  
  return 0;
}
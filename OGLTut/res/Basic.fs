#shader vertex
#version 330 core

layout (location = 0) in vec4 position;

void main()
{
    gl_Position = vec4(position.x, position.y, position.z, 1.0);
}

#shader fragment
#version 330 core

out vec4 color;

uniform vec4 u_Color;

void main()
{
    color = u_Color;
}

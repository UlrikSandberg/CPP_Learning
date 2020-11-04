//
//  renderer.cpp
//  OGLTut
//
//  Created by Ulrik Sandberg on 22/06/2020.
//  Copyright © 2020 Ulrik Sandberg. All rights reserved.
//

#include "renderer.h"
#include <iostream>

void GLClearError()
{
    while(glGetError() != GL_NO_ERROR);
}

bool GLLogCall(const char* function, const char* file, int line)
{
    while(GLenum error = glGetError())
    {
        std::cout << "[OpenGL Error] (" << error << "):" << function <<
        " " << file << ":" << line << std::endl;
        return false;
    }
    return true;
}

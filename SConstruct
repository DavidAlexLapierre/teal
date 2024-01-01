#!/usr/bin/env python

env = Environment(tools=['mingw'], SCONS_CXX_STANDARD='c++20')

# Options

opts = Variables(['custom.py'], ARGUMENTS)
opts.Add(BoolVariable("release", "Release version of the project", False))
opts.Update(env)

# Build parameters
env.Append( CPPPATH=[
        '..\\src',
        '..\\libs\\includes'
] )

env.Append( CPPDEFINES=['WINDOWS'] )
env.Append( LIBPATH=['..\\libs'] )
env.Append( LIBS=[
    'glfw3',
    'opengl32',
    'User32',
    'Gdi32',
    'Shell32'
] )

ccflags = []

if not env["release"]:
    ccflags.append('-g')

env.Append( CCFLAGS=ccflags)

Export("env")

SConscript('src/SConscript', variant_dir='build', duplicate=0)

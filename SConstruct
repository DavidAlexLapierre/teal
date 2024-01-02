#!/usr/bin/env python

import platform

# Options
AddOption('--release', dest='release', action='store_true')
AddOption('--arch', dest='arch', type='choice', choices=['x64', 'x86'], default='x64', nargs=1, action='store')

# Configuration
arch = GetOption('arch')
env = Environment(tools=['mingw'], SCONS_CXX_STANDARD='c++20', TARGET_ARCH=arch)
platform = platform.system()

# Build parameters
env.Append( CPPPATH=[
        env.Dir('src'),
        env.Dir('libs\\includes')
] )

# Defines

defines = []

if platform == 'Windows':
    defines.append('WINDOWS')
elif platform == 'Linux':
    defines.append('LINUX')
elif platform == 'Darwin':
    defines.append('MACOS')

env.Append( CPPDEFINES=defines )
env.Append( LIBPATH=[env.Dir('libs')] )
env.Append( LIBS=[
    'glfw3',
    'opengl32',
    'User32',
    'Gdi32',
    'Shell32'
] )

ccflags = []

if not GetOption('release'):
    ccflags.append('-g')

env.Append( CCFLAGS=ccflags)

Export("env")

outDir = 'debug'
if GetOption('release'):
    outDir = 'release'


SConscript('src/SConscript', variant_dir='build/'+outDir+'/'+arch, duplicate=0)

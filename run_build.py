import os
import subprocess

def run_build():
    if not os.path.exists("build"):
        os.makedirs("build")
        os.chdir("build")
        cmake_command = ["cmake", "-G", "Unix Makefiles", ".."]
    else:
        os.chdir("build")
        cmake_command = ["cmake", ".."]

    subprocess.run(cmake_command)
    make_command = ["make"]
    subprocess.run(make_command)

if __name__ == "__main__":
    run_build()

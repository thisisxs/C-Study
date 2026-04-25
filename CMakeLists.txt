cmake_minimum_required(VERSION 3.10)
project(C_Study_Workspace LANGUAGES C)

# --- 1. Global Configuration ---
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
add_compile_options(-Wall -Wextra -Wpedantic -g)

# --- 2. Include Paths ---
include_directories(include)

# --- 3. Build Shared Logic as a Library ---
# Even if student.c is empty for now, we define it as a library target
add_library(student_lib src/student.c)

# --- 4. Build Application Targets ---

# Target 1: The old Preprocessor Demo
add_executable(preprocessor_lab apps/01_preprocessor/main.c)

# Target 2: The New Student Manager
# Note: We link it with student_lib
add_executable(student_mgr apps/02_student_mgr/main.c)
target_link_libraries(student_mgr student_lib)

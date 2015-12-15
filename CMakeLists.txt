CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

project(Chaine C CXX)

file(
	GLOB_
	includeFile
	*.hpp
)

file(
	GLOB
	sourceFile
	*.cpp
)

add_executable(${PROJECT_NAME} ${includeFile} ${sourceFile})
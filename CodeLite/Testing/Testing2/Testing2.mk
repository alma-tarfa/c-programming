##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Testing2
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :="C:/Users/almat/Documents/C Programming/CodeLite/Testing"
ProjectPath            :="C:/Users/almat/Documents/C Programming/CodeLite/Testing/Testing2"
IntermediateDirectory  :=/Users/almat/Documents/C\ Programming/CodeLite/Testing"/build-$(ConfigurationName)//Users/almat/Documents/C\ Programming/CodeLite/Testing/Testing2
OutDir                 :=/Users/almat/Documents/C\ Programming/CodeLite/Testing"/build-$(ConfigurationName)//Users/almat/Documents/C\ Programming/CodeLite/Testing/Testing2
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=almat
Date                   :=30/06/2020
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/cygwin64/bin/gcc.exe
SharedObjectLinkerName :=C:/cygwin64/bin/gcc.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/cygwin64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/cygwin64/bin/ar.exe rcu
CXX      := C:/cygwin64/bin/gcc.exe
CC       := C:/cygwin64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/cygwin64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=../build-$(ConfigurationName)/Testing2/main.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Testing2/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\Testing2" mkdir "..\build-$(ConfigurationName)\Testing2"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\Testing2" mkdir "..\build-$(ConfigurationName)\Testing2"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/Testing2/.d:
	@if not exist "..\build-$(ConfigurationName)\Testing2" mkdir "..\build-$(ConfigurationName)\Testing2"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Testing2/main.c$(ObjectSuffix): main.c ../build-$(ConfigurationName)/Testing2/main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/almat/Documents/C Programming/CodeLite/Testing/Testing2/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Testing2/main.c$(DependSuffix): main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Testing2/main.c$(ObjectSuffix) -MF../build-$(ConfigurationName)/Testing2/main.c$(DependSuffix) -MM main.c

../build-$(ConfigurationName)/Testing2/main.c$(PreprocessSuffix): main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Testing2/main.c$(PreprocessSuffix) main.c


-include ../build-$(ConfigurationName)/Testing2//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)



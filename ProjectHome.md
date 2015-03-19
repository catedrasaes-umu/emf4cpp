# What is EMF4CPP? #

EMF4CPP (formerly Ecore2CPP) is a C++ implementation and type mapping for the Eclipse Modeling Framework (EMF) core, the Ecore metamodel.

The current release allows to generate C++ code from Ecore metamodels, and to parse and serialize models and metamodels from and into XMI documents. Also, a partially implemented reflective API for generated metamodels is provided.

EMF4CPP consists of two parts: a source code generator from Ecore metamodels to C++ and two runtime support libraries. One of the runtime support libraries implements the Ecore metamodel (libemf4cpp-ecore). The other one allows to parse and serialize modeles in XMI format (libemf4cpp-ecorecpp). The generator is currently implemented using Xpand and Xtend.

This is our first step at providing a set of tools for MDD (Model-Driven Development) in C++ as an alternative to the Java world offered by Eclipse tools. We would like to explore common C++ idioms, paradigms and tools (such as template metaprogramming or Boost.Spirit) to provide tools for managing models, writing Domain-Specific Languages (DSLs), and Model-to-Text (M2T), Model-to-Model (M2M), and Text-to-Model (T2M) transformations.

Two direct advantages can be that C++ programmers can write their data model using Ecore and the Eclipse tools to finally generate code with EMF4CPP, and also, memory consumption and efficiency is usually better in EMF4CPP than in Java, as our preliminary results show.


# Installation #

## Change Log ##

### 12/01/2010 ###

· Releases updated fixing an error at XMI parser.

### 11/29/2010 ###

· Releases updated fixing an installation problem with the ECORECPP library's headers.

## Requeriments ##

· Boost C++ libraries (1.35 or greater)

· G++ (3.4.3 or greater)

· Java Runtime Environment (1.5 or greater)

· CMake (version 2.6 at least)


## Installation from binary distribution ##

The EMF4CPP binary distribution contains the source code generator and the runtime libraries. To install it, you only have to extract the tarball file you can download from [here](http://emf4cpp.googlecode.com/files/emf4cpp-generator-0.0.2-Linux-x86_64.tar.gz). Or simply, as follows:

```
wget http://emf4cpp.googlecode.com/files/emf4cpp-generator-0.0.2-Linux-x86_64.tar.gz
tar xzf emf4cpp-generator-0.0.2-Linux-x86_64.tar.gz
```

## Installation from source distribution ##

1. Download the latest snapshot from [here](http://emf4cpp.googlecode.com/files/emf4cpp-source-1012011253.tgz).

```
wget http://emf4cpp.googlecode.com/files/emf4cpp-source-1012011253.tgz
tar xzf emf4cpp-source-1012011253.tgz
```

2. Create a build directory and run CMake as follows:

```
mkdir build
cd build
cmake ../emf4cpp-source-1012011253 -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=/opt/emf4cpp-0.0.2/
```

3. Compile and install. EMF4CPP is installed by default at /opt/emf4cpp-0.0.2/

```
make
sudo make install
```

## EMF4CPP development distribution ##

The EMF4CPP development distribution tarball file consists of four Eclipse projects: emf4cpp.generator,
emf4cpp.tests, emf4cpp.xtext and emf4cpp.xtext2qi. The first one contains a C++ source code generator
from metamodels conforming to Ecore. The second one contains, as subdirectories, some metamodels we use
to test our implementation, and some emf4cpp-based utilities we are developing. A relevant utility we
are developing is a Python interpreter, called PyEcore, that allows to use EMF4CPP from Python scripts.
The third one is a bootstrap implementation of a ANTLR3 grammars generator from Xtext grammars. The last one is
an under development Boost Sprit Qi grammars generator from Xtext grammars.

You can download the latest development snapshot from
[here](http://emf4cpp.googlecode.com/files/emf4cpp-snapshot-1012011253.tgz).

There is an additional requeriment for this distribution:

· Antlr v3 C runtime library (3.2 or greater, [download](http://www.antlr.org/download/C))

### Build workspace ###

1. Download the tarball file, extract it and change to _builds_ directory.

```
wget http://emf4cpp.googlecode.com/files/emf4cpp-snapshot-1012011253.tgz
tar xzf emf4cpp-snapshot-1012011253.tgz
cd emf4cpp-snapshot-1012011253/builds
```

2. Run the bootstrap script.

```
./bootstrap.sh
```

It creates two build directories: _debug_ and _release_.

3. Build the workspace

```
cd release
make
```

Also, you can build executables and libraries with debug information and debug symbols doing _make_ at _debug_ directory.

4. Install EMF4CPP

Optionally, you can install it doing _sudo make install_. By default, EMF4CPP is installed at /opt/emf4cpp-0.0.2

## EMF4CPP Eclipse plug-in ##

There is another way for generating C++ code from an Ecore metamodel using the EMF4CPP Eclipse plug-in.
This plug-in requires Eclipse Helios and the C/C++ Development Tools.
For installing it, close Eclipse, extract [this package](http://emf4cpp.googlecode.com/files/emf4cpp-plugins-0.0.2.tar.gz) into your Eclipse plugins directory and re-run Eclipse.

This plug-in adds a submenu called _EMF4CPP_ on the Ecore metamodels right click menu. You can use the option _Generate C++ with wizard_ from this menu as the next screenshot shows.

![http://emf4cpp.googlecode.com/svn/trunk/images/emf4cpp-plugin.png](http://emf4cpp.googlecode.com/svn/trunk/images/emf4cpp-plugin.png)

Clicking _finish_ the generated code appears into the selected directory, as the next screenshot shows.

![http://emf4cpp.googlecode.com/svn/trunk/images/emf4cpp-plugin2.png](http://emf4cpp.googlecode.com/svn/trunk/images/emf4cpp-plugin2.png)

# Examples #

In this examples we use the _EMF4CPP\_PATH_ environment variable with the path in which the EMF4CPP source code generator is installed.

## Example 1: The Company metamodel ##

This example shows the basic usage of EMF4CPP, in which, we generate C++ code from the _company_ metamodel showed in the next figure.

![http://emf4cpp.googlecode.com/svn/trunk/images/company-metamodel.png](http://emf4cpp.googlecode.com/svn/trunk/images/company-metamodel.png)

The process folllowed by this metamodel (and by any metamodel conforming to Ecore) is showed in the next figure.

![http://emf4cpp.googlecode.com/svn/trunk/images/company-workflow.png](http://emf4cpp.googlecode.com/svn/trunk/images/company-workflow.png)

This process consists in next three main steps. You can follow them downloading the example source from [here](http://emf4cpp.googlecode.com/svn/trunk/images/emf4cpp-0.0.1-Example1.tgz) and uncompressing it as follows:


```
tar xzf emf4cpp-0.0.1-Example1.tgz
```


### 1. Generate C++ source files from the metamodel (in Ecore XML format). ###


```
cd emf4cpp-0.0.1-Example1
${EMF4CPP_PATH}/bin/emf4cpp.generator.sh company.ecore
```


### 2. Build the metamodel shared library. ###

The produced C++ source code from a metamodel is built as a shared library. To build it, you need use CMake:


```
cmake .
make
```


### 3. Manipulate entities of the types defined in the metamodel in an application linked with the metamodel library and the Ecore2CPP runtime support libraries. ###

In this example, there is an example application that creates a _company_ model, using the library built, above into the _test_ directory. To build it, simply type:


```
cd test
make
```

## Example 2: Creating a metamodel using EMF4CPP at runtime ##

In this example, we create the metamodel above using EMF4CPP.

```
#include <ecore.hpp> // Ecore metamodel
#include <ecorecpp/ecorecpp.hpp> // EMF4CPP utils
#include <iostream>

using namespace ecore;

int main(int argc, char* argv[])
{
    EcoreFactory_ptr ecoreFactory = EcoreFactory::_instance();
    EcorePackage_ptr ecorePackage = EcorePackage::_instance();

    // Create a Company class
    EClass_ptr companyClass = ecoreFactory->createEClass();
    companyClass->setName("Company");

    // Add name attribute to a Company class
    EAttribute_ptr companyName = ecoreFactory->createEAttribute();
    companyName->setName("name");
    companyName->setEType(ecorePackage->getEString());
    companyClass->addEStructuralFeatures(companyName);

    // Create an Employee class
    EClass_ptr employeeClass = ecoreFactory->createEClass();
    employeeClass->setName("Employee");

    // Add a name attribute to an Employee class
    EAttribute_ptr employeeName = ecoreFactory->createEAttribute();
    employeeName->setName("name");
    employeeName->setEType(ecorePackage->getEString());
    employeeClass->addEStructuralFeatures(employeeName);

    // Create a Departament class
    EClass_ptr departmentClass = ecoreFactory->createEClass();
    departmentClass->setName("Department");

    // Add department identification number
    EAttribute_ptr departmentNumber = ecoreFactory->createEAttribute();
    departmentNumber->setName("number");
    departmentNumber->setEType(ecorePackage->getEInt());
    departmentClass->addEStructuralFeatures(departmentNumber);

    // Department class can contain reference to one or many employees
    EReference_ptr departmentEmployees = ecoreFactory->createEReference();
    departmentEmployees->setName("employees");
    departmentEmployees->setEType(employeeClass);

    // Specify that it could be zero or more employees
    departmentEmployees->setUpperBound(-1);
    departmentEmployees->setContainment(true);
    departmentClass->addEStructuralFeatures(departmentEmployees);

    // One of the department employees must be the manager
    EReference_ptr departmentManager = ecoreFactory->createEReference();
    departmentManager->setName("manager");
    departmentManager->setEType(employeeClass);
    departmentManager->setLowerBound(1);
    departmentClass->addEStructuralFeatures(departmentManager);

    // Company can contain reference to zero or more departments
    EReference_ptr companyDepartments = ecoreFactory->createEReference();
    companyDepartments->setName("departments");
    companyDepartments->setEType(departmentClass);
    companyDepartments->setUpperBound(-1);
    companyDepartments->setContainment(true);
    companyClass->addEStructuralFeatures(companyDepartments);

    // Create a package that represents company
    EPackage_ptr companyPackage = ecoreFactory->createEPackage();
    companyPackage->setName("company");
    companyPackage->setNsPrefix("company");
    companyPackage->setNsURI("http:///com.example.company.ecore");
    companyPackage->addEClassifiers(employeeClass);
    companyPackage->addEClassifiers(departmentClass);
    companyPackage->addEClassifiers(companyClass);

    // Initialize the metamodel
    companyPackage->_initialize();

    // Serializing the metamodel
    ::ecorecpp::serializer::serializer _ser("company.ecore"); // filename
    _ser.serialize(companyPackage);

    // Delete the metamodel
    delete companyPackage;

    //
    // Deserializing the serialized metamodel
    //

    // Insert the ecore metamodel in the metamodel repository
    // Required for parsing models conforms to that metamodel
    ecorecpp::MetaModelRepository::_instance()->load(ecorePackage);
    
    // Deserializing the serialized metamodel
    ::ecorecpp::parser::parser _par;
    EPackage_ptr pkg = _par.load("company.ecore")->as< EPackage >(); // filename

    // Printing the metamodel
    std::cout << "EPackage: " << pkg->getName() << std::endl;

    const std::vector< EClassifier_ptr >& classifiers = pkg->getEClassifiers();
    for (size_t i = 0; i < classifiers.size(); i++)
    {
        std::cout << "  EClassifier: " << classifiers[i]->getName()
                  << " (" << classifiers[i]->eClass()->getName() 
                  << ")" << std::endl;
    }

    // Delete the parsed metamodel
    delete pkg;
}
```

To build this example you must link it with EMF4CPP runtime libraries.

```
g++ -o company -I${EMF4CPP_PATH}/include/emf4cpp -L${EMF4CPP_PATH}/lib -lemf4cpp-ecore -lemf4cpp-ecorecpp example2.cpp
```

Example's output:

```
EPackage: company
  EClassifier: Employee (EClass)
  EClassifier: Department (EClass)
  EClassifier: Company (EClass)
```

## Example 3: The Reflective API ##

_Comming soon_

# Performance comparison with Java #

_Comming soon_

# License #

EMF4CPP is released under the LGPL License.

# Acknowledgements #

· Till Steinbach for finding bugs.

# Related publications #

Andrés Senac González, Diego Sevilla Ruiz, Gregorio Martinez Perez, "_EMF4CPP: a C++ Ecore Implementation_", DSDM 2010 - Desarrollo de Software Dirigido por Modelos, Jornadas de Ingenieria del Software y Bases de Datos (JISBD 2010), Valencia, Spain, September 2010. [PDF](http://www.sistedes.es/TJISBD/Vol-4/No-2/articles/DSDM-articulo-13.pdf)

# Contact #

The code is still being actively developed, but we encourage all programmers that want a port of the great EMF tooling to C++ to contact us and test the tools, provide feedback or even code. We hope this utility to be of help to the community. If you want further information, or collaborate with the code or ideas, you can contact either [Andrés Senac](mailto:andres@senac.es) or [Diego Sevilla](mailto:dsevilla@um.es).
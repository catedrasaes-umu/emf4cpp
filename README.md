# What is EMF4CPP? #

EMF4CPP (formerly Ecore2CPP) is a C++ implementation and type mapping for the Eclipse Modeling Framework (EMF) core, the Ecore metamodel.

The current release allows to generate C++ code from Ecore metamodels, and to parse and serialize models and metamodels from and into XMI documents. Also, a partially implemented reflective API for generated metamodels is provided.

EMF4CPP consists of two parts: a source code generator from Ecore metamodels to C++ and two runtime support libraries. One of the runtime support libraries implements the Ecore metamodel (libemf4cpp-ecore). The other one implements the type mapping, support algorithms, and allows to parse and serialize modeles in XMI format (libemf4cpp-ecorecpp). The generator is currently implemented using Xpand and Xtend.

This is our first step at providing a set of tools for MDD (Model-Driven Development) in C++ as an alternative to the Java world offered by Eclipse tools. We would like to explore common C++ idioms, paradigms and tools (such as template metaprogramming or Boost.Spirit) to provide tools for managing models, writing Domain-Specific Languages (DSLs), and Model-to-Text (M2T), Model-to-Model (M2M), and Text-to-Model (T2M) transformations.

Two direct advantages can be that C++ programmers can write their data model using Ecore and the Eclipse tools to finally generate code with EMF4CPP, and also, memory consumption and efficiency is usually better in EMF4CPP than in Java, as our preliminary results show.

# Features #

* Generates C++11 libraries from ecore metamodels - per ecore class one C++ class is generated.

* Updates only source files which really change.

* Object management via boost::intrusive_ptr<> - no more memory leaks.

* Automatic handling of econtainment and eopposite relations - setting one side of a relation automatically sets the other side.

* XMI serialization and deserialization of model instances - a resource framework allows splitting of serializations, including cross-resource containment.

* Full support for reflection - inspect your metamodel at runtime, including sub-/super-class relations. Powerful enough to implement a generic tree copier.

* A notification framework allows callbacks on model changes - useful in model-view-controller frameworks.

* Creation of Qt5 based item providers - translate class and feature names to user visible strings, and provide pixmaps for a graphical user interface.

* Extension hooks

  * Insert your code into the generated code - protected regions at various places are kept by the code generator.

  * Inject constructor methods into the generated factories - extend a generated class by inheritance and have your classes instantiated from the beginning on, including deserialization.

* Includes support classes from EMF's EcoreUtil package, implemented in the namespace ecorecpp::util, starting with TreeIterator, CrossReferencer and Copier.

* A dispatcher framework forwards calls to overloaded methods according to the best-match in the class hierarchy.

# Installation #

## Requirements ##

* Boost C++ libraries (1.54 or greater)

* G++ (4.8.5 or greater due to C++11)

* Java Runtime Environment (1.8 or greater)

* CMake (version 3.5 at least)

* Qt5 (5.6.2 or greater)


## Installation from binary distribution ##

t.b.d.

## Installation from source distribution ##

1. Checkout a clone of this repository

```
git clone https://github.com/catedrasaes-umu/emf4cpp.git
cd emf4cpp
```
2. Build the generator jar file in eclipse

* Start eclipse
* Import generator project
```
Select File->Open Projects from File System...
Select Import Source 'Directory': 'emf4cpp/org.csu.emf4cpp.generator'
```
* Generate Launch configuration
```
Select (from context menu): Run As->Java Application...
Select 'Generator - org.csu.emf4cpp.generator'
```
* Export runnable jar
```
Select (from context menu): Export->Java->Runnable JAR file...
Select Launch configuration: 'Generator - org.csu.emf4cpp.generator'
Select Export destination: org.csu.emf4cpp.generator/org.csu.emf4cpp.generator_2.0.0.jar
```
3. Change to the build directory and run:

```
cd build
./generator-release.sh
```
This builds the library to sub-folder 'emf4cpp-generator-2.0.0'.

## EMF4CPP development distribution ##

The EMF4CPP development project consists of four major components:
org.csu.emf4cpp.generator, emf4cpp.tests, the emf4cpp-ecore library, and the
emf4cpp-ecorecpp library.

Two additional components are contained:
emf4cpp.xtext, which is a bootstrap implementation of a ANTLR3 grammars
generator from Xtext grammars, and emf4cpp.xtext2qi, an under development
Boost Sprit Qi grammars generator from Xtext grammars. These components have
an additional requirement:

* Antlr v3 C runtime library (3.2 or greater, [download](http://www.antlr.org/download/C download))

### org.csu.emf4cpp.generator ###

This is a C++ source code generator from metamodels conforming to Ecore.

Implemented as a model workflow it uses xpand to convert the ecore model into
C++ source code. A small java driver accepts command line arguments and passes
it to the workflow. Afterwards a CppBeautifier formats the code.

If you change the xpand2 templates, you need to rebuild the code generator. To
be on the safe side you should always regenerate the emf4cpp-ecore library and
recompile the emf4cpp-ecorecpp library.

### emf4cpp.tests ###

We use some metamodels, distributed over subdirectories, to test our
implementation, and some emf4cpp-based utilities we are developing. A relevant
utility we are developing is a Python interpreter, called PyEcore, that allows
to use EMF4CPP from Python scripts.

### emf4cpp-ecore library ###

This is the C++ implementation of the ecore metamodel itself. It is generated
by emf4cpp from the reference ecore description (in
org.csu.emf4cpp.generator/src/metamodel/Ecore.ecore).

### emf4cpp-ecorecpp library ###

The runtime library emf4cpp-ecorecpp contains the basic infrastructure, which
is required to process instances of ecore metamodels. Aside of the required
mapping from EMF datatypes to C++ datatypes this includes serialization and
de-serialization, a resource framework, a notification framework, and utilities
like a TreeIterator, a CrossReferencer and a Copier.

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
For installing it, close Eclipse, extract [this package](https://raw.githubusercontent.com/catedrasaes-umu/emf4cpp/downloads/emf4cpp-plugins-0.0.2.tar.gz) into your Eclipse plugins directory and re-run Eclipse.

This plug-in adds a submenu called _EMF4CPP_ on the Ecore metamodels right click menu. You can use the option _Generate C++ with wizard_ from this menu as the next screenshot shows.

![](https://raw.githubusercontent.com/catedrasaes-umu/emf4cpp/images/images/emf4cpp-plugin.png)

Clicking _finish_ the generated code appears into the selected directory, as the next screenshot shows.

![](https://raw.githubusercontent.com/catedrasaes-umu/emf4cpp/images/images/emf4cpp-plugin2.png)

# Examples #

In this examples we use the _EMF4CPP_PATH_ environment variable with the path in which the EMF4CPP source code generator is installed.

## Example 1: The Company metamodel ##

This example shows the basic usage of EMF4CPP, in which, we generate C++ code from the _company_ metamodel showed in the next figure.

![](https://raw.githubusercontent.com/catedrasaes-umu/emf4cpp/images/images/company-metamodel.png)

The process folllowed by this metamodel (and by any metamodel conforming to Ecore) is showed in the next figure.

![](https://raw.githubusercontent.com/catedrasaes-umu/emf4cpp/images/images/company-workflow.png)

This process consists in next three main steps. You can follow them downloading the example source from [here](/https://raw.githubusercontent.com/catedrasaes-umu/emf4cpp/downloads/emf4cpp-0.0.1-Example1.tgz) and uncompressing it as follows:


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

```cpp
#include <ecore.hpp> // Ecore metamodel
#include <ecorecpp.hpp> // EMF4CPP utils
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
    companyClass->getEStructuralFeatures().push_back(companyName);

    // Create an Employee class
    EClass_ptr employeeClass = ecoreFactory->createEClass();
    employeeClass->setName("Employee");

    // Add a name attribute to an Employee class
    EAttribute_ptr employeeName = ecoreFactory->createEAttribute();
    employeeName->setName("name");
    employeeName->setEType(ecorePackage->getEString());
    employeeClass->getEStructuralFeatures().push_back(employeeName);

    // Create a Departament class
    EClass_ptr departmentClass = ecoreFactory->createEClass();
    departmentClass->setName("Department");

    // Add department identification number
    EAttribute_ptr departmentNumber = ecoreFactory->createEAttribute();
    departmentNumber->setName("number");
    departmentNumber->setEType(ecorePackage->getEInt());
    departmentClass->getEStructuralFeatures().push_back(departmentNumber);

    // Department class can contain reference to one or many employees
    EReference_ptr departmentEmployees = ecoreFactory->createEReference();
    departmentEmployees->setName("employees");
    departmentEmployees->setEType(employeeClass);

    // Specify that it could be zero or more employees
    departmentEmployees->setUpperBound(-1);
    departmentEmployees->setContainment(true);
    departmentClass->getEStructuralFeatures().push_back(departmentEmployees);

    // One of the department employees must be the manager
    EReference_ptr departmentManager = ecoreFactory->createEReference();
    departmentManager->setName("manager");
    departmentManager->setEType(employeeClass);
    departmentManager->setLowerBound(1);
    departmentClass->getEStructuralFeatures().push_back(departmentManager);

    // Company can contain reference to zero or more departments
    EReference_ptr companyDepartments = ecoreFactory->createEReference();
    companyDepartments->setName("departments");
    companyDepartments->setEType(departmentClass);
    companyDepartments->setUpperBound(-1);
    companyDepartments->setContainment(true);
    companyClass->getEStructuralFeatures().push_back(companyDepartments);

    // Create a package that represents company
    EPackage_ptr companyPackage = ecoreFactory->createEPackage();
    companyPackage->setName("company");
    companyPackage->setNsPrefix("company");
    companyPackage->setNsURI("http:///com.example.company.ecore");
    companyPackage->getEClassifiers().push_back(employeeClass);
    companyPackage->getEClassifiers().push_back(departmentClass);
    companyPackage->getEClassifiers().push_back(companyClass);

    // Initialize the metamodel
    companyPackage->_initialize();

    // Serializing the metamodel
    std::ofstream stream("company.ecore"); // filename
    ::ecorecpp::serializer::serializer _ser(
        stream, ecorecpp::serializer::serializer::XmiIndentMode::Indentation);
    _ser.serialize(companyPackage);
    stream.close();

    //
    // Deserializing the serialized metamodel
    //

    // Insert the ecore metamodel in the metamodel repository
    // Required for parsing models conforms to that metamodel
    ecorecpp::MetaModelRepository::_instance()->load(ecorePackage);

    // Deserializing the serialized metamodel
    ::ecorecpp::parser::parser _par;
    EPackage_ptr pkg = ::ecore::as< EPackage >(_par.load("company.ecore")); // filename

    // Printing the metamodel
    std::cout << "EPackage: " << pkg->getName() << std::endl;

    const ::ecorecpp::mapping::EList< EClassifier_ptr >& classifiers = pkg->getEClassifiers();
    for (size_t i = 0; i < classifiers.size(); i++)
    {
        std::cout << "  EClassifier: " << classifiers[i]->getName()
                  << " (" << classifiers[i]->eClass()->getName()
                  << ")" << std::endl;
    }

    // All ecore pointers are smart pointers.
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

* Till Steinbach for finding bugs.

# Related publications #

Andrés Senac González, Diego Sevilla Ruiz, Gregorio Martinez Perez, "_EMF4CPP: a C++ Ecore Implementation_", DSDM 2010 - Desarrollo de Software Dirigido por Modelos, Jornadas de Ingenieria del Software y Bases de Datos (JISBD 2010), Valencia, Spain, September 2010. [PDF](http://www.sistedes.es/TJISBD/Vol-4/No-2/articles/DSDM-articulo-13.pdf)

# Contact #

The code is still being actively developed, but we encourage all programmers that want a port of the great EMF tooling to C++ to contact us and test the tools, provide feedback or even code. We hope this utility to be of help to the community. If you want further information, or collaborate with the code or ideas, you can contact either [Andrés Senac](mailto:andres@senac.es) or [Diego Sevilla](mailto:dsevilla@um.es).


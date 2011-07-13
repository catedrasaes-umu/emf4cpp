#! /bin/sh

FILES="./tree-bintree/Tree.ecore
./tree-bintree/BinTree.ecore
./kdm/KDM.ecore
./svg/SVG.ecore
./svg/PrimitiveTypes.ecore
./mydsl/MyDsl.ecore
./company/company.ecore
./cst/CST.ecore
./xpand/xpand3.ecore
./idlmm/IDLMM.ecore
./json/json.ecore
"

EMF4CPP=../../emf4cpp
EMF4CPPJAR=`pwd`/../org.csu.emf4cpp.generator/org.csu.emf4cpp.generator_1.0.0.jar
GENERATOR="java -jar $EMF4CPPJAR"

if test -n "$1" ; then
	(cd `dirname $1` ; $GENERATOR -o . -e $EMF4CPP `basename $1`)
else
  	for i in $FILES; do

		DIRNAME=`dirname $i`
		BASENAME=`basename $i`

		echo "Updating $i"

	        (cd $DIRNAME && $GENERATOR -o . -e $EMF4CPP $BASENAME)

		echo "Done!"
	done
fi

import ecore

print ecore.NsURI
print ecore.__dict__

a = ecore.createEClass()

print a

a.set_name("hola")

name = a.get_name()
print name

a.set_name("adios")

print a.get_name()

# print ecore.package
# print ecore.package.get_name()
# print ecore.package.get_nsURI()
# print ecore.package.get_nsPrefix()
# print ecore.factory



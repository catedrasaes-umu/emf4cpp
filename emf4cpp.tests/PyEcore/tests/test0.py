import ecore

print ecore.__dict__

print ecore.createEClass()

print ecore.EClass.__dict__

i = ecore.createEClass()
print i

i.set_name("hola")
print i.get_name()



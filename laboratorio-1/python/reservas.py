
# Variables...
capacidad = 5

def hay_cupo(reservas, capacidad):
    
    while reservas < capacidad: 
            return True
    else:
         return False
#Retorna True si todavía hay cupo.


def mostrar_resumen(reservas, capacidad, lista_nombres):
                  print(f"""=== Resumen ===
                        Reservas aceptadas: {reservas}/{capacidad}
{lista_nombres} """)  # Muestra cuántos cupos se usaron y la lista de reservas aceptadas.

"""""_____________________  main  _____________________________"""

def main(): 
     lista_nombres = ""  
     reservas = 0
     continuar = True
     print("... Sistema de aceptaciones, digite -salir- para salir ...")
     while continuar: 
          
          nombre = input("Ingrese un nombre: ")


          if nombre == "salir":
               print("Cerrando programa....") #para cerrar el programa
               break

          #elif nombre == "resumen":                 #esto era como para irlo testeando
               #mostrar_resumen(reservas, capacidad)

          elif hay_cupo(reservas, capacidad) == True: #si hay espacio aún, repite el código
            reservas += 1  #añade al contador
            lista_nombres += f"-{nombre}\n"  # se añade eñ nombre si hay espacio
            
            print(f"""
                Cupos disponibles: {capacidad - reservas} 
                Nombre: {nombre}
                Reserva aceptada""") 
            
          else:
               print(f"""
                No hay cupos disponibles
                Reserva no aceptada""")
               mostrar_resumen(reservas, capacidad, lista_nombres) #muestra un resumen final
               continuar = False # rompe el bucle
   
main()



Algoritmo GestionProducto
    Definir id, stock, opcion, cantidad Como Entero
    Definir precio, ganancias Como Real
    Definir nombre Como Cadena
	
    ganancias <- 0
	
    Escribir "=== REGISTRO DEL PRODUCTO ==="
    Escribir "Ingrese el ID del producto: "
    Leer id
    Escribir "Ingrese el nombre del producto: "
    Leer nombre
    Escribir "Ingrese la cantidad en stock: "
    Leer stock
    Escribir "Ingrese el precio unitario: "
    Leer precio
	
    Repetir
        Escribir ""
        Escribir "=== MENU ==="
        Escribir "1. Vender producto"
        Escribir "2. Reabastecer producto"
        Escribir "3. Consultar informacion"
        Escribir "4. Mostrar ganancias"
        Escribir "5. Salir"
        Escribir "Elija una opcion: "
        Leer opcion
		
        Segun opcion Hacer
            1:
                Escribir "Ingrese cantidad a vender: "
                Leer cantidad
                Si cantidad <= stock Entonces
                    stock <- stock - cantidad
                    ganancias <- ganancias + (cantidad * precio)
                    Escribir "Venta realizada con exito."
                SiNo
                    Escribir "No hay suficiente stock."
                FinSi
				
            2:
                Escribir "Ingrese cantidad a agregar: "
                Leer cantidad
                stock <- stock + cantidad
                Escribir "Stock actualizado."
				
            3:
                Escribir "--- INFORMACION DEL PRODUCTO ---"
                Escribir "ID: ", id
                Escribir "Nombre: ", nombre
                Escribir "Stock: ", stock
                Escribir "Precio: ", precio
				
            4:
                Escribir "Ganancias actuales: ", ganancias
				
            5:
                Escribir "Saliendo del programa..."
				
            De Otro Modo:
                Escribir "Opcion no valida."
        FinSegun
    Hasta Que opcion = 5
	
FinAlgoritmo

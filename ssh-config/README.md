# Generar y Configurar una Llave SSH para GitHub y GitLab  

Este documento explica cómo generar una llave SSH y configurarla para usarla en GitHub y GitLab.  

---

## **1. Generar una Llave SSH**  

### **En Windows**  
1. **Abrir PowerShell o Git Bash**.  
   - Usa PowerShell (presiona `Win + S` y busca "PowerShell") o Git Bash.  

2. **Ejecutar el comando**:  
   ```bash
   ssh-keygen -t rsa -b 4096 -C "tu_correo@example.com"
   ```  
   - Presiona **Enter** para aceptar la ubicación predeterminada.  
   - Configura una contraseña si quieres o deja en blanco.  

3. **Ubicación de la llave pública**:  
   - Está en `C:\Users\TU_USUARIO\.ssh\id_rsa.pub`.  

### **En Ubuntu**  
1. **Abrir la terminal** (`Ctrl + Alt + T`).  

2. **Ejecutar el comando**:  
   ```bash
   ssh-keygen -t rsa -b 4096 -C "tu_correo@example.com"
   ```  
   - Presiona **Enter** para aceptar la ubicación predeterminada.  
   - Configura una contraseña o déjala en blanco.  

3. **Ubicación de la llave pública**:  
   - Está en `~/.ssh/id_rsa.pub`.  

---

## **2. Copiar la Llave Pública**  

1. **Obtener la clave pública**:  
   Ejecuta en tu terminal (Windows o Ubuntu):  
   ```bash
   cat ~/.ssh/id_rsa.pub
   ```  

2. **Copiar el contenido**:  
   Selecciona el texto que aparece y cópialo.  

---

## **3. Configurar la Llave SSH en GitHub y GitLab**  

### **En GitHub**  
1. Ve a [GitHub SSH Settings](https://github.com/settings/keys).  
2. Haz clic en **New SSH key**.  
3. Pega tu llave pública en el campo **Key** y da un nombre en **Title**.  
4. Haz clic en **Add SSH key**.  

### **En GitLab**  
1. Ve a [GitLab SSH Settings](https://gitlab.com/-/profile/keys).  
2. Pega tu llave pública en el campo **Key** y da un nombre en **Title**.  
3. Haz clic en **Add key**.  

---

## **4. Probar la Conexión**  

### **Para GitHub**  
Ejecuta:  
```bash
ssh -T git@github.com
```  
Si todo funciona, verás un mensaje de éxito.  

### **Para GitLab**  
Ejecuta:  
```bash
ssh -T git@gitlab.com
```  
También deberías recibir un mensaje de éxito.  

---
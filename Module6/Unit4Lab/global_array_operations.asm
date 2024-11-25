.data
globalArray: .word 3, 6, 9, 12
loopArray: .space 20

.text
.globl main

main:
    lw t0, globalArray + 0         
    li t1, 4
    mul t0, t0, t1
    sw t0, globalArray + 4

    # Populate loopArray 
    li t2, 0
populate_loop:
    bge t2, 5, print_loop
    slli t3, t2, 2
    addi t3, t3, 2
    sw t3, loopArray(t2)
    addi t2, t2, 1
    j populate_loop

# Reset loop counter
print_loop:
    li t2, 0                         
print_elements:
    bge t2, 5, exit
    lw a0, loopArray(t2)
    li a7, 1
    ecall
    li a0, 10
    li a7, 11
    ecall
    addi t2, t2, 1
    j print_elements

# Exit program
exit:
    li a7, 10           
    ecall

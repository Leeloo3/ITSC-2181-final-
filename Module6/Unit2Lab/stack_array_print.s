
# Author Jaden S 801292597
.text
.globl main

main:
    # Allocate space for 5 integers
    addi sp, sp, -20

    # Initialize array
    li t0, 0
    sw t0, 0(sp)
    li t0, 2
    sw t0, 4(sp)
    li t0, 4
    sw t0, 8(sp)
    li t0, 6
    sw t0, 12(sp)
    li t0, 8
    sw t0, 16(sp)

    lw t0, 0(sp)
    slli t0, t0, 1
    sw t0, 8(sp)

    # Print array values
    li t1, 0
    li t2, 5

print_loop:
    beq t1, t2, end_print_loop  # If counter == size, exit loop

    # Load current array element
    slli t3, t1, 2
    add t4, t3, sp
    lw t5, 0(t4)

    # Print the value (assuming a print function is available)
    li a0, 1
    mv a1, t5
    li a7, 1
    ecall

    # Increment counter
    addi t1, t1, 1
    j print_loop

end_print_loop:
    # Deallocate stack space
    addi sp, sp, 20

    # Exit program
    li a7, 10
    ecall 
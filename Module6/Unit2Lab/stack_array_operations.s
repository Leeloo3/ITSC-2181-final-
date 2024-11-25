.text
.globl main

main:
    # Task 1: Creating and manipulating a 4-element array
    # Allocate space for 4 integers (16 bytes) on stack
    addi sp, sp, -16
    
    # Initialize array with values [2, 4, 6, 8]
    li t0, 2
    sw t0, 0(sp)    # arr[0] = 2
    li t0, 4
    sw t0, 4(sp)    # arr[1] = 4
    li t0, 6
    sw t0, 8(sp)    # arr[2] = 6
    li t0, 8
    sw t0, 12(sp)   # arr[3] = 8
    
    # Double the first element and store in second position
    lw t0, 0(sp)    # Load first element
    slli t0, t0, 1  # Multiply by 2
    sw t0, 4(sp)    # Store in second position
    
    # Deallocate the first array
    addi sp, sp, 16
    
    # Task 2: Summing 3-element array
    # Allocate space for 3 integers (12 bytes) plus 4 bytes for sum
    addi sp, sp, -16
    
    # Initialize array with [5, 10, 15]
    li t0, 5
    sw t0, 0(sp)    # arr[0] = 5
    li t0, 10
    sw t0, 4(sp)    # arr[1] = 10
    li t0, 15
    sw t0, 8(sp)    # arr[2] = 15
    
    # Initialize sum = 0
    li t0, 0        # sum = 0
    sw t0, 12(sp)   # Store sum on stack
    
    # Loop to calculate sum
    li t1, 0        # Loop counter
    li t2, 3        # Array size
    
sum_loop:
    beq t1, t2, end_loop    # If counter == size, exit loop
    
    # Load current sum
    lw t3, 12(sp)
    
    # Calculate offset and load array element
    slli t4, t1, 2          # offset = counter * 4
    add t4, t4, sp          # address = base + offset
    lw t5, 0(t4)           # Load array element
    
    # Add to sum
    add t3, t3, t5
    sw t3, 12(sp)          # Store updated sum
    
    # Increment counter
    addi t1, t1, 1
    j sum_loop

end_loop:
    # Deallocate stack space
    addi sp, sp, 16
    
    # Exit program
    li a7, 10
    ecall 
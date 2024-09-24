module f ( output s, input x, input y );
wire w1, w2, w3, w4, w5;
not NOT_1 (w1, x);
not NOT_2 (w2, y);
and OR__1 (w3, y, w1);
or OR__2 (w4, w2, x);
not NOT_3 (w5, w4);
and AND_1 (s, w3, w5);
endmodule // s = f (x,y)

module preparacao02;

reg x, y;
wire s;


f teste(s,x,y);

initial begin
    $display ("x  y  s");
    // Monitor the values of x, y, and s
    $monitor("%b  %b  %b", x, y, s);
    
    // Test cases
    x = 0; y = 0; #10;
    x = 0; y = 1; #10;
    x = 1; y = 0; #10;
    x = 1; y = 1; #10;
    
    $finish; // End the simulation
end

endmodule
  
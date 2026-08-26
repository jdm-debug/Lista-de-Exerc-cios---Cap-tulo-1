/*
 * Instrucao                | Status    | Justificativa
 * ----------------------- -|-----------|---------------------------------------
 * a) int a;                | Correto   | 
 * b) float b;              | Correto   | 
 *                          |           | 
 * c) double float c;       | Incorreto | Dois especificadores de tipo base
 *                          |           | incompativeis na mesma declaracao.
 *                          |           | O compilador nao sabe se "c" e
 *                          |           | double ou float.
 * d) unsigned char d;      | Correto   | 
 *                          |           | 
 * e) unsigned e;           | Correto   | 
 *                          |           | 
 * f) long float f;         | Incorreto | Combinacao invalida: "long" so pode
 *                          |           | modificar "int" ou "double", nunca pode ser usado junto
 *                          |           | com float.
 *                          |           | 
 *                          |           | 
 * g) long g;               | Correto   | 
 * h) long double h;        | Correto   | 
 *                          |           | 
 *                          |           | 
 *
 */
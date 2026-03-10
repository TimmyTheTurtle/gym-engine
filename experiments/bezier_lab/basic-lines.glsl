void mainImage( out vec4 fragColor, in vec2 fragCoord )
{
    // 1. COORDINATES
    // Normalize pixel coordinates (0 to 1)
    vec2 uv = fragCoord / iResolution.xy;

    // 2. BACKGROUND GRADIENT
    // Define corner colors
    vec3 colTopLeft     = vec3(0.7, 0.1, 0.9);
    vec3 colTopRight    = vec3(0.1, 0.8, 0.7);
    vec3 colBottomLeft  = vec3(0.7, 0.1, 0.4);
    vec3 colBottomRight = vec3(0.1, 0.8, 0.1);

    // Mix horizontally first
    vec3 topRow    = mix(colTopLeft, colTopRight, uv.x);
    vec3 bottomRow = mix(colBottomLeft, colBottomRight, uv.x);
    
    // Then mix vertically to get the final background
    vec3 background = mix(bottomRow, topRow, uv.y);
    
    // 3. THE EQUATION: 0 = ax^m + by^n
    // Plotting x^2 - sqrt(y) = 0
    // We use abs(uv) to prevent 'NaN' errors with negative numbers
    float val = 3.0 * pow(uv.x, 0.5) - 2.0 * pow(abs(uv.y), 1.0);

    // 4. CALCULATE LINE THICKNESS (The "Magic" Part)
    // fwidth(val) tells us how much 'val' changes between pixels.
    // By dividing abs(val) by this change, we convert the units 
    // from "Math Space" to "Pixel Space".
    float distanceInPixels = abs(val) / fwidth(val);

    // 5. DRAW THE LINE (Anti-aliasing)
    // We want the line to be 1.0 pixels wide.
    // If distanceInPixels is 0.0 (center of line), smoothstep returns 1.0.
    // If distanceInPixels is 1.0 (edge of line), smoothstep returns 0.0.
    float lineMask = smoothstep(1.0, 0.0, distanceInPixels);

    // 6. FINAL COLOR MIXING
    vec3 lineColor = vec3(0.0, 0.0, 1.0); // Blue
    vec3 finalRGB  = mix(background, lineColor, lineMask);
    
    fragColor = vec4(finalRGB, 1.0);
}

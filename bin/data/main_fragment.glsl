#version 150

uniform vec3 color;
uniform vec2 u_resolution;

uniform sampler2DRect tex_0;
uniform sampler2DRect tex_1;
uniform sampler2DRect tex_2;
uniform sampler2DRect tex_3;
uniform sampler2DRect tex_4;
uniform sampler2DRect tex_5;
uniform sampler2DRect tex_6;
uniform sampler2DRect tex_7;
uniform sampler2DRect tex_8;
uniform sampler2DRect tex_9;


out vec4 outColor;

void main() {
    vec2 coord = gl_FragCoord.xy / u_resolution;
    vec3 tex_color0 = texture(tex_0, coord).xyz;
    vec3 tex_color1 = texture(tex_1, coord).xyz;
    vec3 tex_color2 = texture(tex_2, coord).xyz;
    vec3 tex_color3 = texture(tex_3, coord).xyz;
    vec3 tex_color4 = texture(tex_4, coord).xyz;
    vec3 tex_color5 = texture(tex_5, coord).xyz;
    vec3 tex_color6 = texture(tex_6, coord).xyz;
    vec3 tex_color7 = texture(tex_7, coord).xyz;
    vec3 tex_color8 = texture(tex_8, coord).xyz;
    vec3 tex_color9 = texture(tex_9, coord).xyz;
//    
//    vec3 t = tex_color0/10.;
//    t += tex_color1/10.;
//    t += tex_color2/10.;
//    t += tex_color3/10.;
//    t += tex_color4/10.;
//    t += tex_color5/10.;
//    t += tex_color6/10.;
//    t += tex_color7/10.;
//    t += tex_color8/10.;
//    t += tex_color9/10.;
    
    vec3 t = tex_color0;
    t += tex_color1;
    t += tex_color2;
    t += tex_color3;
    t += tex_color4;
    t += tex_color5;
    t += tex_color6;
    t += tex_color7;
    t += tex_color8;
    t += tex_color9;
    
    
    outColor = vec4(t, 1.0);
}
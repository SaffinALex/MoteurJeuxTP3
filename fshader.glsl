#version 150

uniform sampler2D textureR;

in vec2 v_texcoord;
in vec3 v_position;
//! [0]
void main()
{
    // Set fragment color from texture
    /*vec4 pos = normalize(v_position);
    gl_FragColor = vec4(pos.x,pos.y,pos.z,1.0f);*/
    gl_FragColor = texture2D(textureR, v_texcoord);
}
//! [0]

